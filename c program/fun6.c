#include<stdio.h>
void prime(int);
main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    prime(a);
}
void prime(int n)
{
int i,c=0;
for(i=2;i<=n;i++)
if(n%i==0)
{
    c++;
}
if(c==1)
{
    printf("prime num");
}
else
{
  printf("not prime");
}
}
