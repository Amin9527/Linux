libmath.a:sub.o add.o
	ar -rc libmath.a sub.o add.o
add.o:add.c
	gcc -c add.c -o add.o
sub.o:sub.c
	gcc -c sub.c -o sub.o
.PHONY:clean
clean:
	rm -f sub.o add.o sub.c add.c
