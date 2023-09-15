#include<iostream>
using namespace std;
int main()
{
    int rev,a,b,c,d,n;
    cout<<"\neter 4 digit numer";
    cin>>n;
    a=n/1000;
    b=n/100%10;
    c=n/10%10;
    d=n%10;
   rev=d*1000+c*100+b*10+a*1;
    cout<<"sum is"<<rev;

}