//4.Write data in a file using class.
#include<fstream>
#include<iostream>
using namespace std;
class student
{
private:
int Reg_no;
char cname[20];
public:
void setno()
{
cout<<"Enter the registration number"<<endl;
cin>>Reg_no;
}
void setname()
{
cout<<"Enter the student name";
cin>>cname;
}
int getno()
{
return Reg_no;
}
char *getname()
{
return cname;
}
};
int main()
{
ofstream obj("write.txt");
student s;
s.setno();
s.setname();
obj<<s.getno();
obj<<s.getname();
obj.close();
}
