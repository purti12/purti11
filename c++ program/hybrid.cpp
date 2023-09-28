#include <iostream>
using namespace std;
class student
{
    protected:
    int id;
    char name[20];
    public:
    void get()
   {
     cout<<"\nenter student id=";
    cin>>id;
    cout<<"\nenter student name=";
    cin>>name;
    }
    void put()
    {
        cout<<"\nstudent id is="<<id;
        cout<<"\nstudent name is="<<name;
    }
};
class test:public student
{
 protected:int marks1,marks2,marks3;
 public:
 void getin()
 {
 get();
 cout<<"\n enter marks of 3 subject=";
 cin>>marks1>>marks2>>marks3;
}
void putin()
{
    put();
    cout<<"marks of student is="<<marks1;
    cout<<"marks of student is="<<marks2;
    cout<<"marks of student is="<<marks3;
}
};
class sports
{
    protected:int m1,m2,m3;
    public:
        void gets()
        {
          cout<<"\nenter 3 sports name=";
          cin>>m1>>m2>>m3;
        }
        void puts()
        {
            cout<<"sports grades is"<<m1;
            cout<<"sports grades is"<<m2;
            cout<<"sports grades is"<<m3;
        }

    };
class result:public test,public sports
{
    private:int s;
    public:
   void results()
 {

    s=marks1+marks2+marks3+m1+m2+m3;
    cout<<"total is="<<s;

 }
};
main()
{
 result r;
 r.getin();
 r.putin();
 r.gets();
 r.puts();
 r.results();

}
