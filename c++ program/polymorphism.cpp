#include<iostream>
using namespace std;
int mul(int a,int b)
{
return(a*b);
}
int mul(int a,int b,int c)
{
return(a*b*c);
}
float mul(int a,float b)
{
 return a+b;
}
int main()
{
int a,b,c;
float d;
cout<<"Enter the values of a and b\n";
cin>>a>>b>>c>>d;
int y=mul(a,b);
cout<<"Multiplication = "<<y<<endl;
int z=mul(a,b,c);
cout<<"Multiplication = "<<z;
cout<<"\n Multiply:"<<mul(a,d);
}
