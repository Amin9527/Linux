#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	int rfd = open("mypipe",O_RDONLY);
	if(rfd<0)
	{
		perror("open");
		exit(0);
	}
	char buf[1024];
	while(1)
	{
		printf("please wait~\n");
		int s=read(rfd,buf,sizeof(buf));
		if(s>0)
		{
			printf("client say:#%s\n",buf);
		}
		else if(s==0)
		{
			printf("client not home!\n");
			exit(0);
		}
		else
		{
			perror("receive error!\n");
		}
	}
	close(rfd);
	return 0;
}
