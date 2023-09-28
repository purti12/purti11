#include<iostream>
using namespace std;
template<class T>
T sub(T a,T b)
{
  return a-b;
}
int main()
{
 int x=10,y=5,z;
 z=sub(x,y);
 cout<<"substraction is="<<z;
}