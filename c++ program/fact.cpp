#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,facto;
    cout<<"enter any number";
    cin>>n;
    facto=fact(n);
    cout<<"fact is"<<facto;
}
int fact (int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
   return fact;
    }
