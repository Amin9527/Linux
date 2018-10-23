#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main()
{
	int fds[2],len=0;
	char buffer[100];
	if(pipe(fds)==-1)
	{
		perror("pipe error!");
		exit(1);
	}
	while(fgets(buffer,100,stdin))
	{
		len=strlen(buffer);
		if(write(fds[1],buffer,len)!=len)
		{
			perror("write error!");
			break;
		}
		memset(buffer,0x00,sizeof(buffer));
		if((len=read(fds[0],buffer,100))==-1)
		{
			perror("read error!");
			break;
		}
		if(write(1,buffer,len)!=len)
		{
			perror("write stdout error!");
			break;
		}
	}
	return 0;
}
