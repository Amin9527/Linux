#include<iostream>
using namespace std;

class test
{
	public:
		virtual void display()
		{
			cout<<"This is test!"<<endl;
		}
};

class test1:public test
{
	public:
		void display()
		{
			cout<<"This is test1!"<<endl;
		}
};

class test2:public test1
{
	public:
		void display()
		{
			cout<<"This is test2!"<<endl;
		}
};

int main()
{
	test t;
	test* p=&t;
	p->display();
	test1 t1;
	p=&t1;
	p->display();
	test2 t2;
	p=&t2;
	p->display();
	return 0;
}








