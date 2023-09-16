#include<stdio.h>
void interest(int,int,int);
int main()
{
    int s,n,r,p;
    printf("enter principal,rate and interest ");
    scanf("%d%d%d",&n,&r,&p);
    interest(n,r,p);
}
void interest(int a,int b,int c)
{
    int s1;
     s1=a*b*c/100;
 printf("%d",s1);
}
