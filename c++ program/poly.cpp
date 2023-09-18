#include<iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
float add(int,float);
int main()
{
    int a,b,c,sum;
    float d,sum1;
    cout<<"enter 3 number";
    cin>>a>>b>>c;
    cout<<"enter float number";
    cin>>d;
    sum=add(a,b);
    cout<<"\nsum of 2 integer"<<sum;
    sum= add(a,b,c);
    cout<<"\nsum of three integer"<<sum;
    sum1= add(a,d);
    cout<<"\nsum of float and integer"<<sum1;
}
int add(int x,int y)
{
    /* int s;
    s=x+y; */
    return x+y;
 }
 int add(int x,int y,int z)
 {
    /* int s1;
 s1=x+y+z; */
 return x+y+z;
 }
 float add(int x,float y)
 {
    /* int s2;
    s2=x+y; */
    return x+y;

 }



    
