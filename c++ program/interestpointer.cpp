//3.WAP to find simple interest using pointer.
 #include <iostream>
using namespace std;
void interest(int*,int*,int*);
int main()

{
   int p=1000,n=2,r=3;
   interest(&p,&n,&r);
} 
void interest(int *a,int *b,int *c)
{
    int s;
 s=(*a *  *b *  *c)/100;
cout<<"interest is="<<s;
}
  
	