#include<stdio.h>
#include<unistd.h>

int main()
{
	char bar[100]={'\0'};
	char *arr="-\\|/";
	int i=0;
	for(i=0;i<=100;i++)
	{
		bar[i]='#';
		printf("[%-100s][%c][%d\%]\r",bar,arr[i%4],i);
		fflush(stdout);
		usleep(10000000);
	}
	printf("\n");
	return 0;
}
