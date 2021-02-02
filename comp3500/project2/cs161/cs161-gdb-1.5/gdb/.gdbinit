echo Setting up the environment for debugging gdb.\n

set complaints 1

b internal_error

b info_command
commands
	silent
	return
end

dir /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/gdb/../libiberty
dir /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/gdb/../bfd
dir /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/gdb
dir .
set prompt (top-gdb) 
