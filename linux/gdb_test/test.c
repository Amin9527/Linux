#include<stdio.h>
#include<string.h>

int main()
{
	int i=0;
	char arr[10];
	for(i=0;i<5;i++)
	{
		arr[i]='0';
	}
	printf("%d\n",strlen(arr));
	return 0;
}
