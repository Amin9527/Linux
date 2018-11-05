#include<iostream>

using namespace std;

class HungryMode
{
    public:
        static HungryMode* Get0bject(int n)
        {
            return &object;
        }

        void print()
        {
            cout<<i<<endl;
        }

    private:
        HungryMode(int n=0):i(n){}
        HungryMode(const HungryMode&);
        HungryMode& operator=(const HungryMode&);
        static HungryMode object;
        int i;
};

HungryMode HungryMode::object;

int main()
{
    HungryMode* o1=HungryMode::Get0bject(8);
    o1->print();
    return 0;
}
