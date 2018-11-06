#include<iostream>

using namespace std;

class LazeMode
{
    public:
        static LazeMode* GetObject() //在需要对象时才创建对象
        {
            if(p_object==NULL)
                p_object=new LazeMode();
            return p_object;
        }
    private:
        LazeMode(){}
        LazeMode(const LazeMode&);
        static LazeMode* p_object; //刚开始建立对象指针
        int i;
};

int main()
{
    return 0;
}
