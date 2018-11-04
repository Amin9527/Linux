#include<iostream>
#include<string.h>
using namespace std;

template<typename T>

class vector
{
    public:
        //构造函数
        vector():_pdata(NULL),_size(0),_capacity(0){};

        //检查是否需要扩容
        T* isexpand()
        {
            if(_capacity==0)
            {
                _capacity=3;
                _pdata=new T[_capacity];
            }
            else if(_size==_capacity)
                {
                    T* newdata=new T[2*_capacity];
                    memcpy(newdata,_pdata,sizeof(T)*_size);
                    delete[] _pdata;
                    _pdata=newdata;
                    _capacity=2*_capacity;
                }
            return _pdata;
        }
        
        //[]运算符重载
        T operator[](int n)
        {
            return _pdata[n];
        }

        //size()
        int size()
        {
            return _size;
        }

        //尾插
        void push_back(T data)
        {
            isexpand();
            _pdata[_size++]=data;
        }

        //头插
        void push_front(T data)
        {
            isexpand();
            for(int i=_size;i>0;--i)
            {
                _pdata[i]=_pdata[i-1];
            }
            _pdata[0]=data;
            ++_size;
        }

        //print
        void print()
        {
            for(int i=0;i<size();i++)
            {
                cout<<_pdata[i]<<" ";
            }
        }

    private:
        T* _pdata;
        size_t _size;
        size_t _capacity;
};

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_front(0);
    v1.print();
    vector<char> v2;
    v2.push_back('z');
    v2.push_back('m');
    v2.push_back('g');
    v2.push_back('x');
    v2.push_front('i');
    v2.print();
    cout<<endl;
    return 0;
}
