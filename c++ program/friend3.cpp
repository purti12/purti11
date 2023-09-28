#include<iostream>
using namespace std;
class rec
{
    int l;
    public:
    rec()
    {
        l=10;
    }
    friend void area();
};
class demo
{
    int b;
    public:
    demo()
    {
        b=25;
    }
    friend void area();
};
void area()
{
    rec s;
    demo d;
    int c=s.l*d.b;
    cout<<"area is"<<c;
    int p=(s.l+d.b+s.l+d.b);
    cout<<"perimeter"<<p;
}
int main()
{
    area();
}