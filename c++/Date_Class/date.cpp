#include<iostream>
using namespace std;

class date
{
    public:
        date()
        {
            _year=1996;
            _month=12;
            _day=19;
        }

        date(int year,int month,int day):_year(year),_month(month),_day(day){}
        
        date operator+(int day)
        {
            date d1=*this;
            d1._day=d1._day+day;
            return d1;
        }
        date& operator+=(int day)
        {
            (*this)._day=(*this)._day+day;
            return *this;
        }
        void display()
        {
            cout<<_year<<"/"<<_month<<"/"<<_day<<endl;
        }
    private:
        int _year;
        int _month;
        int _day;
};

int main()
{
    date d1;
    cout<<"d1:";
    d1.display();
    date d2(d1);
    cout<<"d1:";
    d1.display();
    cout<<"d2:";
    d2.display();
    //cout<<"d1+3:";
    //(d1+3).display();
    cout<<"d1+5"<<endl;
    d1=d1+5;
    cout<<"d1:";
    d1.display();
    cout<<"d2:";
    d2.display();
    return 0;
}

