all:send receive
send:send.c comm.c
	gcc -o $@ $^
receive:receive.c comm.c
	gcc -o $@ $^
.PHONY:clean
clean:
	rm -f send receive
