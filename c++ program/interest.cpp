#include<iostream>
using namespace std;
int main()
{
    int s,p,n,r;
    cout<<"\n enter principal,year,rate";
    cin>>p>>n>>r;
    s=p*n*r/100;
    cout<<"\nsimple interest is"<<s;
    //cout<<"\n interest of"<<p<<"and"<<n<<"is"<<r<<s;
}