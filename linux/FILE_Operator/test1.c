#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in,*out;
	char filename[10],ch;
	if((in=fopen("file.txt","r"))==NULL)
	{
		printf("open file error!\n");
		exit(0);
	}
	printf("please input file:\n");
	scanf("%s",filename);
	if((out=fopen(filename,"w"))==NULL)
	{
		printf("open file error!\n");
		exit(0);
	}
	//fgetc(in);
	while(!feof(in))
	{
		fputc(fgetc(in),out);
	}
	fclose(in);
	fclose(out);
	return 0;
}
