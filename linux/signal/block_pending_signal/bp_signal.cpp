#include<iostream>
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>

using namespace std;

void PrintCurSignal(sigset_t *set);

int main()
{
    sigset_t m,n;
    sigemptyset(&m);
    //sigemptyset(&n);
    sigaddset(&m,SIGQUIT);
    sigprocmask(SIG_BLOCK,&m,NULL);
    while(1)
    {
        sigpending(&n);
        PrintCurSignal(&n);
        sleep(1);
    }
    return 0;
}

void PrintCurSignal(sigset_t *n)
{
    int i=0;
    for(i=0;i<32;i++)
    {
        if(sigismember(n,i))
        {
            putchar('1');
        }
        else
        {
            putchar('0');
        }
    }
}

