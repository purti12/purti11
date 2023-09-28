#include<iostream >
using namespace std;
int main()
{
int *ptr_a=new int[20]; // int num[20];
int *ptr_n=new int;
cout<<"\n\n\n\nHow many numbers are there"<<endl;
cin>>*ptr_n;
for(int i=0 ; i < *ptr_n ; ++i)
{
cout<<"Element :";
cin>>ptr_a[i]; // num[i]
}
cout<<"Contents of the array\n";
for(i=0;i<*ptr_n;i++)
{
cout<<ptr_a[i];
cout<<"\t";
}
delete ptr_n;
delete [ ] ptr_a;
}