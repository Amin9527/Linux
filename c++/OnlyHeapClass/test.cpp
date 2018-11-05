#include<iostream>

using namespace std;

class str
{
    public:
        static str* CreateHeapClass(int n) //静态函数，因为要创建该类对象
        {
            str* p=new str(n);
            return p;
        }

        void print()
        {
            cout<<i<<endl;
        }
    private:
        str(int n=0):i(n){} //将构造函数私有化，防止将对象创建在栈上
        str(const str&);    //将拷贝构造函数私有化，防止调用拷贝构造函数将对象创建在栈上
        int i;
};

int main()
{
    //str s1(8);
    //s1.print();
    str* p=str::CreateHeapClass(9);
    p->print();
    return 0;
}
