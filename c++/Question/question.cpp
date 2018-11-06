//cout<<"佛祖保佑"<<endl<<"张敏，加油！"<<endl;

#include<string>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class stu
{
    public:
        stu(){}
        stu(int n,char* st):i(n){strcpy(str,st);}

        void print()
        {
            cout<<i<<endl;
            cout<<str<<endl;
        }
    private:
        int i;
        char str[6];
};

int main()
{
    stu s1(1,"abcd");
    s1.print();
    cout<<endl;
    stu s2(s1);
    s2.print();
    cout<<endl;
    stu s3=s1;
    s3.print();
    cout<<endl;
    
    return 0;
}

///////////////////////数组的初始化
//int main()
//{
//    //int arr[10]={0};
//    int arr1[10];
//    //int arr2[10]={1};
//    return 0;
//}

///////////////////string类的部分调用接口
/*
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
*/
/////////////////////////////////联合体，大端小端
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




