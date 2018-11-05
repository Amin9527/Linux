#include<iostream>
using namespace std;

class str
{
    public:
        str(int n=0):i(n){}
        void print()
        {
            cout<<i<<endl;
        }
    private:
        void* operator new(size_t t);
        void operator delete(void* p);
        int i;
};


int main()
{
    str s1(8);
    s1.print();
    //str* p1=new str(9);
    //p1->print();
    return 0;
}
