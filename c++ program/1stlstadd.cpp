#include<iostream>
using namespace std;
int main()
{
    int sum=0,a,b,c,d,n;
    cout<<"\neter 4 digit numer";
    cin>>n;
    a=n/1000;
    b=n/100%10;
    c=n/10%10;
    d=n%10;
    sum=a+d;
    cout<<"sum is"<<sum;

}
