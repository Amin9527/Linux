#include<iostream>
#include<string>

using namespace std;
string String_x_2(int n)
{
    string str="1";
    for(int i=0;i<n;i++)
    {
        int m=0;
        for(int j=str.size()-1;j>=0;j--)
        {
            int k=str[j]-'0';
            k=(k<<1)+m;
            str[j]=k%10+'0';
            m=k/10;
        }
        if(m>0)
            str.insert(str.begin(),m+'0');
    }
    return str;
}

int main()
{
    int n=0;
    cout<<"plase input N: ";
    cin>>n;
    cout<<String_x_2(n)<<endl;
    return 0;
}
