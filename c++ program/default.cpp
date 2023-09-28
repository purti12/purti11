#include<iostream>
using namespace std;
class student
{
    private:
    int id;
    char name[20];
    public:
    void get();
    void put();
    class address
    {
        private:
        char address[20];
        public:void in();
        void out();
    };
};
void student::get()
{
    cout<<"\nenter name";
    cin>>name;
    cout<<"\nenter id";
    cin>>id;
}
void student::put()
{
    cout<<"name="<<name;
    cout<<"id="<<id;
}
void student:: address::in()
{
 cout<<"\nenter address";
 cin>>address;
}
void student::address::out()
{
 cout<<"addressis="<<address;
}
main()
{
    student s;
    student::address a;
    s.get();
    s.put();
    a.in();
    a.out();
}