#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* fp;
	char ch,filename[10];
	printf("please input filename!\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("fopen file error!\n");
		exit(0);
	}
	ch=getchar();
	ch=getchar();
	while(ch!='!')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;
}
