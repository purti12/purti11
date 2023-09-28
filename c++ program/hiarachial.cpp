#include <iostream>
using namespace std;
class student
{
    private:
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
class science:public student
{
    private:
    char s,s1[20],s2[20],s3[20];
    public:
    void getin()
    {
        get();
        cout<<"\nenter 3 subjects name=";
        cin>>s1>>s2>>s3;
    }
    void putin()
    {
        put();
        cout<<"\nsubects is"<<s1;
       cout<<"\nsubects is"<<s2;
         cout<<"\nsubects is"<<s3;
    }
};
class commerce:public student
{
    protected:
    char c,c1[20],c2[20],c3[20];
    public:
    void input()
    {
        get();
        cout<<"\nenter 4 subjects name=";
        cin>>c>>c1>>c2>>c3;
    }
    void output()
    {
        put();
        cout<<"\nsubjects is="<<c1;
         cout<<"\nsubjects is="<<c2;
          cout<<"\nsubjects is="<<c3;
    }
};
int main()
 {
    science s;
    s.getin();
    s.putin();
    commerce c;
    c.input();
    c. output();
 }

