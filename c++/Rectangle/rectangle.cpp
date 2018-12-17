#include<iostream>

using namespace std;

class rectangle
{
public:
    rectangle();
	void input();
	void dispaly();
    friend rectangle operator+(rectangle& ,rectangle&);
private:
    int array[2][3];
};

rectangle::rectangle()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			array[i][j]=0;
		}
	}
}

void rectangle::input()
{
	cout<<"please scanf six values!"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>array[i][j];
		}
	}
}

void rectangle::dispaly()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}

rectangle operator+(rectangle& a,rectangle& b)
{
	rectangle m;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			m.array[i][j]=a.array[i][j]+b.array[i][j];
		}
	}
	return m;
}

int main()
{
	rectangle a,b,c;
	a.input();
	b.input();
	c=a+b;
	c.dispaly();
	return 0;
}
