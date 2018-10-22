#include<iostream>
using namespace std;

class Student
{
	public:
		//Student(int i,string n,int g):id(i),name(n),grade(g){};
		void input()
		{
			cout<<"please input ID:";
			cin>>id;
			cout<<"please input name:";
			cin>>name;
			cout<<"please input grade:";
			cin>>grade;
		}
		void display()
		{
			cout<<"ID:"<<id<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"grade:"<<grade<<endl<<endl;
		}
	friend void Max(Student stu[5]);
	private:
		int id;
		string name;
		int grade;
};

void Max(Student stu[5])
{
	Student *s=&stu[0];
	for(int i=0;i<4;i++)
	{
		if(s->grade>stu[i+1].grade)
			;
		else
			s=&stu[i+1];
	}
	cout<<s->name<<"'s grade is maxest,grade is "<<s->grade<<endl;
}

int main()
{
	//Student stu[5]={{1,"zhangmin",96},{2,"suheng",92},{3,"gaoxing",98},{4,"zhangyao",95},{5,"suqian",94}};
	Student stu[5];
	for(int i=0;i<5;i++)
	{
		stu[i].input();
	}
	stu[0].display();
	stu[2].display();
	stu[4].display();
	Max(stu);
	return 0;
}
