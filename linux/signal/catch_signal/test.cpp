#include<iostream>
#include<signal.h>
#include<unistd.h>

using namespace std;

//typedef void (*handler)(int);

void handler_t(int num)
{
    cout<<"haha:num="<<num<<endl;
}

int main()
{
    int n=0;
    while(1)
    {
        cout<<"hello zhangmin!"<<endl;
        sleep(1);
        if(++n==5)
            //signal(SIGINT,SIG_IGN);//忽略信号
            //signal(SIGINT,SIG_DFL);//系统默认的信号处理方式
            signal(2,handler_t);//自定义处理信号
    }
    return 0;
}
