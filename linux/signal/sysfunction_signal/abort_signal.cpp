#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>

using namespace std;

int main()
{
    int n=0;
    while(1)
    {
        ++n;
        sleep(1);
        if(5==n)
            abort();
    } 
    return 0;
}
