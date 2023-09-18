//wap to find area of circle and rectangle
#include<iostream>
using namespace std;
int area(int , int );
float area(float);
int main()
{
    int l,b,area1;
    float r,area2;
    cout<<"enter length and breadth";
    cin>>l>>b;
    area1=area(l,b);
    cout<<area1;
    cout<<"\nenter radius";
    cin>>r;
    area2=area(r);
    cout<<area2;
}
 int area(int x,int y)
 {
    int a;
    a=x*y;
    return a;
}
float area(float x)
{
    float a1,pi=3.14;
     a1=pi*x*x;
     return a1;

}

