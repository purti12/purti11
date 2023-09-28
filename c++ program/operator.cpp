#include<iostream>
using namespace std;

class op
{
int a,b;
public:
     op()
    {
     a=10;
     b=20;
    }

void operator ++()
{
a=++a;
b=++b;
}
void show()
{
cout<<"value of a="<<a<<endl<<"value of b="<<b<<endl;
}
};
class oper
{
int x,y;
public:oper()
{
 x=15;
 y=5;
}
void operator--()
{
    x=--x;
    y=y-1;
}
void display()
{
    cout<<"valueof x="<<x<<"value of y="<<y<<endl;
}
};
int main()
{

op o;
o.show();
++o;//calling
o.show();
oper r;
r.display();
--r;
r.display();
}