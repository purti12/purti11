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
    student s[2];
    for(int i=0;i<2;i++)
    {
        s[i].get();
        s[i].put();
    }
 }
