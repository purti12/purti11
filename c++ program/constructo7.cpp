#include<iostream>
using namespace std;
class rectangle
{
    private:
    int l,b;
    public:
    rectangle()
    {
        l=2;
        b=4;
    }
    /* rectangle(int i,int j)
    {
        l=i;
        b=j; */
    }
    void area()
    {
        int a =l*b;
        cout<<"\narea is"<<a;

    }




}
{