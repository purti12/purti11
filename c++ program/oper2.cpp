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
}
void operator--()
{
    b=--b;
}
void show()
{
    cout<<"\n a="<<a;
    cout<<"\n b="<<b;
    

}
};
int main()
{

op o;
o.show();
++o;//calling
--o;
o.show();
}