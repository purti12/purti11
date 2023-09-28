#include<iostream>
using namespace std;
int main()
{
int *ptr_a=new int;
int *ptr_b=new int;
int *pt_sum=new int;
int *pt_sub=new int;
int *pt_mult=new int;
int *pt_div=new int;
cout<<"Enter any two integers"<<endl;
cin>>*ptr_a>>*ptr_b;
*pt_sum = *ptr_a + *ptr_b;
*pt_sub = *ptr_a - *ptr_b;
*pt_mult = *ptr_a * *ptr_b;
*pt_div = *ptr_a / *ptr_b;
cout<<"Addition ="<<*pt_sum<<endl;
cout<<"Substraction ="<<*pt_sub<<endl;
cout<<"Multiplication ="<<*pt_mult<<endl;
cout<<"Division ="<<*pt_div<<endl;
delete ptr_a;
delete ptr_b;
delete pt_sum;
delete pt_sub;
delete pt_mult;
delete pt_div;
}