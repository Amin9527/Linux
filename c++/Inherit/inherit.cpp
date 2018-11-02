#include<iostream>
#include<string>
using namespace std;

class student
{
	public:
		void input()
		{
			cout<<"please input name:";
			cin>>name;
			cout<<"please input age:";
			cin>>age;
			cout<<"please input id:";
			cin>>id;
		}
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"id:"<<id<<endl;
		}
	private:
		string name;
		int age;
		string id;
};

class student1:public student
{
	public:
		void input1()
		{
			input();
			//cout<<"please input name:";  //
			//cin>>name;                   //   
			//cout<<"please input age:";   //
			//cin>>age;                    // error, this is private variable
			//cout<<"please input id:";    //
			//cin>>id;                     //
			cout<<"please input sex:";
			cin>>sex;
			cout<<"please input address:";
			cin>>address;

		}
		void display1()
		{
			display();
			cout<<"sex:"<<sex<<endl;
			cout<<"address:"<<address<<endl;
		}
	private:
		char sex;
		string address;
};

class student2:private student
{
	public:
		void input2()
		{
			input();
			cout<<"please input number:";
			cin>>number;
		}
		void display2()
		{
			display();
			cout<<"number:"<<number<<endl;
		}
	private:
		string number;
};

int main()
{
	//student1 s1;
	////s1.input();
	//s1.input1();
	////s1.display();
	//s1.display1();
	student2 s2;
	//s2.input(); //error 
    s2.input2();
	//s2.display(); //error
	s2.display2();
	return 0;
}
