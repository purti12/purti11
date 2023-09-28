#include<iostream>
using namespace std;
template<class t>
void swa(t &a, t &b)
{ 
    t c;
   c=a;
  a=b;
  b=c;
}
int main()
{
    int x=5,y=10;
     cout<<"before swap value  "<<x<<" "<<y;
    swap(x,y);
   
    cout<<"afteer value "<<x<<" "<<y;

}