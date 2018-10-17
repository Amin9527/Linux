#include<iostream>
#include<string>
using namespace std;

class Person
{
	public:
		Person(string nam,char se,int ag):name(nam),sex(se),age(ag){};
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"sex:"<<sex<<endl;
			cout<<"age:"<<age<<endl;
		}
	protected:
		string name;
		char sex;
		int age;
};

class Student:virtual public Person
{
	public:
		Student(string nam,char se,int ag,float scor):Person(nam,se,ag),score(scor){};
		void stu_display()
		{
			display();
			cout<<"score:"<<score<<endl;
		}
	protected:
		float score;
};

class Teacher:virtual public Person
{
	public:
		Teacher(string nam,char se,int ag,string titl):Person(nam,se,ag),title(titl){};
		void tea_display()
		{
			display();
			cout<<"title:"<<title<<endl;
		}
	protected:
		string title;
};

class Graduate:public Student,public Teacher
{
	public:
		Graduate(string nam,char se,int ag,float scor,string titl,int wag)
			:Person(nam,se,ag),Student(nam,se,ag,scor),Teacher(nam,se,ag,titl),wage(wag){};
		void Grad_display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"sex:"<<sex<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"score:"<<score<<endl;
			cout<<"title:"<<title<<endl;
			cout<<"wage:"<<wage<<endl;
		}
	private:
		int wage;
};

int main()
{
	Graduate p1("zhangmin",'M',22,96.11,"coder",200000);
	p1.Grad_display();
	return 0;
}
