#include<stdio.h>

int main()
{
    char* st="abcd";
    char str[6]="abcd";
    char* st1;
    st1=st;
    printf("%s\n",st1);
    return 0;
}



//----------------------------字符串指针和字符串数组
/*
void print(char st[])
{
    //st[1]='e';
    printf("%s\n",st);
}

int main()
{
    //char* str="abcd";
    print("abcd");
    return 0;
}
*/
//----------------------------------------
/*
#include<unistd.h>//函数sleep（）的头文件
int main()
{
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d\r",i);//printf()函数先将数据输出置输出缓冲区，输出缓冲                          //区是按行刷新的
		fflush(stdout);//强输出流，有东西就输出
		sleep(2);//睡眠2秒
	}
	return 0;
}
*/
//------------------------------------
/*
int main()
{
	//int i=0;
	int arr[10]={0};
	int i=0;//变量的创建先创建在高地址处，此处变量i后创建因该不会死循环，
	        //可是死循环了，不理解（vs2013中没有死循环）
	for(i=0;i<=11;i++)
	{
		arr[i]=0;
		printf("hehe\n");
	}
	return 0;
}
*/
//-----------------------------------------

