#include<iostream>
using namespace std;
class A
{
protected:int a;
public:void get()
{
    cout<<"enter value of a";
    cin>>a;

}
};
class B
{protected:int b;
    public: void getin()
    {
        cout<<"enter value of b:";
        cin>>b;
  }
};
class C:public A,public B
{
    private:int c,x,y;
    public :void add()
    {
         c=a+b;
        cout<<"c"<<c;
}
};
int main()
{
    C c;
    c.get();
    c.getin();
    c.add();
}