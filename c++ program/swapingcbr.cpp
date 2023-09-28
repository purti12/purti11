#include<iostream>
using namespace std;
void swap(int &a,int &b)
{ 
    int c;
   c=a;
  a=b;
  b=c;
}
int main()
{
    int a=5,b=10;
    swap(a,b);
    cout<<"value of a"<<a;
    cout<<"value of b"<<b;

}