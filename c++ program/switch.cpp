#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter 1 for even odd\nenter 2 for prime numer\n enter3 for armstrong\nenter4 for palindrome"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
    int num1;
    cout<<"\nenter the number";
    cin>>num1;
    if(num1%2==0)
    {
        cout<<"\neven number";
    }
    else
    {
    cout<<"\nodd number";
    }
    break;
    case 2:
    int num2,i,c;
    cout<<"\nenter the number";
    cin>>num2;
    for(i=2;i<=num2;i++)
    {
    if(num2%i==0)
    {
        c++;
    }
    }
    if(c==1)
    {
        cin>>"prime number";
    }
    else
    {
      cin>>"not prime number";
    }
    break;
    case 3:
      int num3,r,temp,sum=0;
      cout<<"enter the number";
      cin>>num3;
      temp=num3;
      while(num3>0)
      {
        r=num3%10;
        sum=sum+(r*r*r);
        num3=num3/10;
      }
      if(temp==sum)
      {
        cout<<"\n armstrong number";
      }
      else
      {
        cout<<"\n not armstrong number";
      }
      break;


    }
}
