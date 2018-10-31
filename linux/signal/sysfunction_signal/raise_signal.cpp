#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<signal.h>

using namespace std;

int main()
{
    int n=0;
    while(1)
    {
        cout<<++n<<endl;
        if(1314520==n)
            raise(SIGINT);
    }
    return 0;
}
