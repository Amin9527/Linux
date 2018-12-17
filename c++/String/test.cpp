#include<iostream>
#include<string>

using namespace std;

void test1()
{
    string s1="abcdefgh";
    for(auto e : s1)
    {
        cout<<e<<" ";
    }
    cout<<endl;
}

int main()
{
    test1();
    return 0;
}
