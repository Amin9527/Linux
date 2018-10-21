libmymath.so:add.o sub.o
	gcc -shared -o libmymath.so add.o sub.o
add.o:add.c
	gcc -c add.c -o add.o
sub.o:sub.c
	gcc -c sub.c -o sub.o
.PHONY:clean
clean:
	rm -f add.o sub.o add.c sub.c
