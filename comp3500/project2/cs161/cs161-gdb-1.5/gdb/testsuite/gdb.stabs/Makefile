VPATH = /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/gdb/testsuite/gdb.stabs
srcdir = /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/gdb/testsuite/gdb.stabs

all: 
	@echo "Nothing to be done for all..."

#### host, target, and site specific Makefile frags come in here.

clean mostlyclean:
	-rm -f *.o *~ core tmp.c tmp.s weird.s errs

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log

Makefile: $(srcdir)/Makefile.in $(srcdir)/configure.ac
	$(SHELL) ./config.status --recheck
