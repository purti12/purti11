#include<iostream>
using namespace std;

class student
{
    private:
    int prn_no;
    char name[20];
    public:

void get()
{
    cout<<"\nenter pnr no and name";
    cin>>prn_no>>name;
}
void put()
{
cout<<"\npnr number is="<<prn_no;
cout<<"\nstudent name is="<<name;
}
};
main()
{
    student s,*p;
    p=&s;
    p->get();
    p->put();
}