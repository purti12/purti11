// design a class holiday with two data member initialize take wih 0,1
//and 2 argument using constructor
#include<iostream>
using namespace std;
class holiday
{
    string a,b;
    public:
    holiday()
    {
        cout<<"holiday is";
    }
holiday(string i)
{
    a=i;
    cout<<"\nholiday is on"<<i;
}
holiday(string x,string y)
{
    a=x;
    b=y;
    cout<<"\nholidayis on"<<a;
    cout<<"\nholiday is on"<<b;
}
};
main()
{
    holiday h("mon"),h1("tue","sun");
}
