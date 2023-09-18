#include<iostream>
using namespace std;
class student
{
    private:
    int id;
    long contact;
    string name;
    string add;
    public:
    student()
    {
       cout<<"\n default "<<endl;
    }
      student( int i,long c,string n,string ad)
      {
        id=i;
        contact=c;
        name=n;
        add=ad;
        cout<<"\nid is="<<id;
        cout<<"\n contact id="<<contact;
        cout<<"\n name is="<<name;
        cout<<"\n address is="<<add;
    
      }
};
main()
{
    student s(25,8857802298,"purti","nagpur");
}

