#include<iostream>
using namespace std;
class addition
{
    private:int a=25,b=10,c;
    public:
    void add(int i,int j)
    {
        a=i;
        b=j;
        c=i+j;
        cout<<"total is"<<c;
    }
     int add(float m,int n)
     {
        a=m;
        b=n;
        c=m-n;
        cout<<"addition is"<<c;
     }
};
int add(float x,float y)
{
    
}