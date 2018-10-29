#include<iostream>
using namespace std;

int main()
{
    int array[100]={0},m=0,n=0;
    char ch;
    while(cin>>m>>ch>>n)
    {
        for(int i=m;i<n;i++)
        {
            array[i]=1;
        }
    }

    int index=0;
    for(int j=0;j<sizeof(array)/sizeof(int);j++)
    {
        if(1==array[j] && 0==index)
        {
            cout<<j<<",";
            index=1;
        }
        else if(0==array[j] && 1==index)
        {
            cout<<j<<" ";
            index=0;
        }
    }

    return 0;
}
