#include<iostream>
using namespace std;
int main()
{
int arr [5],i,*p;
p=arr;
cout<<"enter value for array";
for(i=0;i<5;i++)
{
    cin>>arr[i];
}
for(i=0;i<5;i++)
{
   cout<<"address of array is="<<(int)p<<"value of array="<<*p<<endl; /* code */
   p++;
}
}