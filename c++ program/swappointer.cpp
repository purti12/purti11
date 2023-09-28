#include<iostream>
using namespace std;
void swap(int *,int *);
 int main()
{
    int a=5,b=10;
    cout<<"before swapping value of a"<<a<<"value of b"<<b;
 swap(&a,&b);
    cout<<"\nafter swapping value of a"<<a<<"value of b"<<b;
}
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;

}