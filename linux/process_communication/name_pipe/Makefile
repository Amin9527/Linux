.PHONY:all
all:receive send
receive:receive.c
	gcc -o $@ $^
send:send.c
	gcc -o $@ $^
.PHONY:clean
clean:
	rm -f receive send mypipe
