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
cout<<"\npnr number is"<<prn_no;
cout<<"student name is"<<name;
}
};
main()
{
 student s,p;
 s.get();
 s.put();
 p.get();
 p.put();
}


