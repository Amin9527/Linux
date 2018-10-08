#include<stdio.h>
#include<unistd.h>

int main()
{
	int p_id=fork();
    if(p_id==0)
        printf("This is son! pid=%d\n",getpid());
    else if(p_id>0)
        printf("This is farther ppid=%d!\n",getppid());
    else
        printf("Error!");
	printf("*******************\n");
	usleep(1000000);
    return 0;
}
