#include<iostream>
using namespace std;
class A
{
private:int a;
public:
int get()
{
    cout<<"enter value of a";
    cin>>a;
    return a;
}
};
class B
{
    private:int b;
    public: int  getin()
    {
        cout<<"enter value of b:";
        cin>>b;
        return b;
    }
};
class C:public A,public B
{
    private:int c,x,y;
    public :void add()
    { 
        x=get();
        y=getin();
        c=x+y;
        cout<<"c"<<c;
    }
};
int main()
{
    C c;
    //c.get();
    //c.getin();
    c.add();
}