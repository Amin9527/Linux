#include<iostream>
#include<unistd.h>
#include<signal.h>

using namespace std;

int main()
{
    int n=0;
    alarm(1);
    while(1)
    {
        cout<<n++<<endl;
    }
    return 0;
}
