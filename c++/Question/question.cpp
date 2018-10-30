//cout<<"佛祖保佑"<<endl<<"张敏，加油！"<<endl;

#include<string>
#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
    string str="zhangmin";
    //cout<<"str.begin():"<<str.begin()<<endl;
    //cout<<"str.end():"<<str.end()<<endl;
    str.insert(str.end(),'g');
    cout<<str<<endl;
    str.insert(str.end(),'a');
    cout<<str<<endl;
    str.insert(str.begin(),'x');
    cout<<str<<endl;
    return 0;
}

//联合体，大端小端
/*
int main()
{
    int m=0x1a00;
    int n=0x001a;
    cout<<m<<endl<<n<<endl;
    union un
    {
        int l;
        char ch;
    }un1;
    un1.l=0x1a00002a;
    printf("%d\n",un1.ch);
    return 0;
}
*/
///////////////////////////////////////////////////////////////

//  %  与   /
/*
int main()
{
    cout<<2%10<<endl;
    cout<<2/10<<endl;
    cout<<16/10<<endl;
    return 0;
}
*/

//////////////////////////////////////////////////////////////////

//string类大小的计算
/*
int main()
{
	string zm1="张敏高兴z";
	string str="12345";
	string zm="zhangmin";
	cout<<zm1.size()<<endl;
	cout<<str.size()<<endl;
	cout<<zm.size()<<endl;
	return 0;
}
*/




