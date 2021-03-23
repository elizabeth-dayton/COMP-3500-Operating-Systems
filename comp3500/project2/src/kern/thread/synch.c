/*
 * Synchronization primitives.
 * See synch.h for specifications of the functions.
 */

#include <types.h>
#include <lib.h>
#include <synch.h>
#include <thread.h>
#include <curthread.h>
#include <machine/spl.h>
#include <queue.h>

////////////////////////////////////////////////////////////
//
// Semaphore.

struct semaphore *
sem_create(const char *namearg, int initial_count)
{
	struct semaphore *sem;

	sem = kmalloc(sizeof(struct semaphore));
	if (sem == NULL) {
		return NULL;
	}

	sem->name = kstrdup(namearg);
	if (sem->name == NULL) {
		kfree(sem);
		return NULL;
	}

	sem->count = initial_count;
	return sem;
}

void
sem_destroy(struct semaphore *sem)
{
	int spl;
	assert(sem != NULL);

	spl = splhigh();
	assert(thread_hassleepers(sem)==0);
	splx(spl);

	/*
	 * Note: while someone could theoretically start sleeping on
	 * the semaphore after the above test but before we free it,
	 * if they're going to do that, they can just as easily wait
	 * a bit and start sleeping on the semaphore after it's been
	 * freed. Consequently, there's not a whole lot of point in 
	 * including the kfrees in the splhigh block, so we don't.
	 */

	kfree(sem->name);
	kfree(sem);
}

void 
P(struct semaphore *sem)
{
	int spl;
	assert(sem != NULL);

	/*
	 * May not block in an interrupt handler.
	 *
	 * For robustness, always check, even if we can actually
	 * complete the P without blocking.
	 */
	assert(in_interrupt==0);

	spl = splhigh();
	while (sem->count==0) {
		thread_sleep(sem);
	}
	assert(sem->count>0);
	sem->count--;
	splx(spl);
}

void
V(struct semaphore *sem)
{
	int spl;
	assert(sem != NULL);
	spl = splhigh();
	sem->count++;
	assert(sem->count>0);
	thread_wakeup(sem);
	splx(spl);
}

////////////////////////////////////////////////////////////
//
// Lock.

struct lock *
lock_create(const char *name)
{
	struct lock *lock;

	lock = kmalloc(sizeof(struct lock));
	if (lock == NULL) {
		return NULL;
	}

	lock->name = kstrdup(name);
	if (lock->name == NULL) {
		kfree(lock);
		return NULL;
	}
	
	// add stuff here as needed
	lock->holder = NULL;
	lock->lock_occupied = 0;

	return lock;
}

void
lock_destroy(struct lock *lock)
{
	assert(lock != NULL);

	// add stuff here as needed
	
	kfree(lock->name);
	kfree(lock);
	lock = NULL;
}

void
lock_acquire(struct lock *lock)
{
	int spl;
	assert(lock != NULL);
	spl = splhigh(); //turn off interrupts
	
	if (lock_do_i_hold(lock)) { //this checks for deadlock
		panic ("lock %s at %p: Deadlock.\n", lock->name, lock);
	}

	while(lock->holder != curthread && lock->lock_occupied == 1) { //someone else is currently using resource
		thread_sleep(lock);	
	}
	
	lock->lock_occupied = 1;
	lock->holder = curthread;
	splx(spl); //restore previous interrupt level		

	// (void)lock;  // suppress warning until code gets written
}

void
lock_release(struct lock *lock)
{
	int spl;
	assert(lock != NULL);
	spl = splhigh(); //turn off interrupts	

	lock->lock_occupied = 0;
	lock->holder = NULL;
	thread_wakeup(lock);
	
	splx(spl); //restore the previous interrupt level

	// (void)lock;  // suppress warning until code gets written
}

int
lock_do_i_hold(struct lock *lock)
{
	int spl, same;

//	assert(lock != NULL);
	spl = splhigh(); //turn off interrupts	
	
	if (lock->holder == curthread) { //if the current holder is this thread, same is 1
		same = 1;
	}
	
	else { same = 0;} //if the current holder is not this thread, same is 0
	
	splx(spl); //restore previous interrupt level 
	return same; //return either 1 for true or 0 for false		

	// (void)lock;  // suppress warning until code gets written

	// return 1;    // dummy until code gets written
}

////////////////////////////////////////////////////////////
//
// CV


struct cv *
cv_create(const char *name)
{
	struct cv *cv;

	cv = kmalloc(sizeof(struct cv));
	if (cv == NULL) {
		return NULL;
	}

	cv->name = kstrdup(name);
	if (cv->name==NULL) {
		kfree(cv);
		return NULL;
	}
	
	// add stuff here as needed

	cv->count = 0;
	cv->thread_queue = q_create(1);
	
	return cv;
}

void
cv_destroy(struct cv *cv)
{
	assert(cv != NULL);

	// add stuff here as needed
	assert(cv->count == 0);
	assert(q_empty(cv->thread_queue));

	q_destroy(cv->thread_queue);
	
	kfree(cv->name);
	kfree(cv);

	cv = NULL;
}

void
cv_wait(struct cv *cv, struct lock *lock)
{
	int spl;
	assert(cv != NULL);
	assert(lock != NULL);
	assert(lock_do_i_hold(lock));

	assert(in_interrupt == 0);
	spl = splhigh();
	lock_release(lock);
	cv->count++;
	q_preallocate(cv->thread_queue, cv->count);
	q_addtail(cv->thread_queue, curthread);
	thread_sleep(curthread);
	lock_acquire(lock);
	splx(spl);

	// (void)cv;    // suppress warning until code gets written
	// (void)lock;  // suppress warning until code gets written
}

void
cv_signal(struct cv *cv, struct lock *lock)
{
	int spl;
	assert(cv != NULL);
	assert(lock != NULL);
	assert(lock_do_i_hold(lock));
	spl = splhigh();

	cv->count--;
	struct thread *next_thread = q_remhead(cv->thread_queue);
	
	thread_wakeup(next_thread);
	splx(spl);
		
	// (void)cv;    // suppress warning until code gets written
	// (void)lock;  // suppress warning until code gets written
}

void
cv_broadcast(struct cv *cv, struct lock *lock)
{
	assert(cv != NULL);
	assert(lock != NULL);
	assert(lock_do_i_hold(lock));

	while(cv->count > 0) {

		cv_signal(cv, lock);
	}

	assert(cv->count == 0);
	assert(q_empty(cv->thread_queue));	
	
	// (void)cv;    // suppress warning until code gets written
	// (void)lock;  // suppress warning until code gets written
}
