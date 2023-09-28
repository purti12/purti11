#include<iostream>
using namespace std;
class student
{
    private:
 int admno;
 char sname [20];
 float eng, math, science ,total;
 float ctotal(float,float,float)
 {
    total=eng+math+science;
    return total;
 }
 public:
void Takedata()
{
    cout<<"enter addmission number";
    cin>>admno;
    cout<<"enter name";
    cin>>sname;
    cout<<"enter marks of eng,math,science";
    cin>>eng>>math>>science;
 total= ctotal(eng,math,science);
}
void showdata()
{ 
    cout<<"roll no is="<<admno;
    cout<<"name of student is="<<sname;
    cout<<"marks of eng="<<eng<<"marks of math="<<math<<"marks of science="<<science;
    cout<<"total marks is="<<total;

}
};
main()
{
    student s;
    s.Takedata();
    s.showdata();
}