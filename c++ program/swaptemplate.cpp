#include<iostream>
using namespace std;
template<class t>
void swap(t  *a, t *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int x=4,y=8;
    cout<<"\nbefore swapping"<<x<<" "<<y;
    swap(x,y);
    cout<<"\nafter swapping"<<x<<" " <<y;
}