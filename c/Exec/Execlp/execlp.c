#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	pid_t pid=fork();
	if(pid<0)
	{
		printf("progress error!\n");
		exit(0);
	}
	else if(pid>0)
	{
		printf("I am farther!\n");
		exit(1);
	}
	else
	{
		execlp("ls","ls","-al",NULL);
		printf("I am son!\n");
		exit(2);
	}
	return 3;
}
