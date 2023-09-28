#include <iostream>
using namespace std;
class employee
{
    private:
    int id;
    string name;
    public:
    void get()
   {
     cout<<"\nenter employee id=";
    cin>>id;
    cout<<"\nenter employee name=";
    cin>>name;
   }
   void put()
   {
    cout<<"\nemploye name is="<<name;
    cout<<"\nemployee id is="<<id;
   }

};
class salary:public employee
{
    private:int s,ns,pf,bs,hra;
    public:
        void sal()
        {
            get();
            put();
            cout<<"\nenter base salary=";
            cin>>bs;
            pf=0.2*bs;
            hra=0.4*bs;
            ns=bs+hra-pf;
            cout<<"emp salary is="<<ns;
        }

    };
main()
{
    salary e;
    e.sal();
}
