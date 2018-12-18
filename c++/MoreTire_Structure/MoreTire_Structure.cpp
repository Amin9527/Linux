#include<iostream>
#include<string>
using namespace std;

class Student
{	
public:
	Student(string n,int a):name(n),age(a){};
	void display()
	{
		cout<<"name:"<<name<<endl;
		cout<<"age:"<<age<<endl;
	}
private:
	string name;
	int age;
};

class Student1:public Student
{
public:
	Student1(string n,int a,long int t):Student(n,a),tel(t){};
	void show()
	{
		display();
		cout<<"tel:"<<tel<<endl;
	}
private:
	long int tel;
};

class Student2:public Student1
{
public:
	Student2(string n,int a,long int t,char* add):Student1(n,a,t),adder(add){};
	void show_all()
	{
		show();
		cout<<"adder:"<<adder<<endl;
	}
private:
	char* adder;
};
int main()
{
	Student2 s2("zhangmin",22,15029282813,"shanxishengshenmushi");
	s2.show_all();
	return 0;
}
