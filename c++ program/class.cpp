#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    string name;
    public:
   void input()
  {
    cout<<"enter name";
  cin>>name;
  cout<<"enter id";
  cin>>id;
}
void output()
{
    cout<<" \nname of employee is"<<name;
    cout<<"\nid of employee is"<<id ;
}
void cal_salary()
{
    int sal,s,pf,hra;

    cout<<"\nenter basic salary";
    cin>>sal;
    pf=0.2*sal;
    hra=0.4*sal;
    s=(sal+hra)-pf;
    cout<<"gross salary is"<<s;
}
};
main()
{
    employee e;
    e.input();
    e.output();
    e.cal_salary();
}