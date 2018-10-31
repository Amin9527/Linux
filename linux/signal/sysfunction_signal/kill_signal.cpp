#include<iostream>
#include<sys/types.h>
#include<signal.h>
#include<unistd.h>

using namespace std;

int main()
{
    sleep(5);
    kill(9273,SIGINT);
    return 0;
}
