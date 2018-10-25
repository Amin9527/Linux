#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	umask(0);
	if(mkfifo("mypipe",0777)<0)
	{
		perror("mkfifo");
		exit(0);
	}
	int wfd=0;
	wfd=open("mypipe",O_WRONLY);
    if(wfd<0)
	{
		perror("open");
		exit(0);
	}
	char buf[1024];
	while(1)
	{
		printf("please input:\n");
		fflush(stdout);
		int s=read(0,buf,sizeof(buf)-1);
		if(s>0)
		{
			buf[s]=0;
			write(wfd,buf,strlen(buf));
		}
		else if(s<0)
		{
			perror("input error!");
			exit(1);
		}
	}
	close(wfd);
	return 0;
}
























