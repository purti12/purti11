#include<stdio.h>
void fact(int);
main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    fact(n);
}
void fact(int a)
{
int i, fact=1;
for(i=1;i<=a;i++)
{
    fact=fact*i;
}
 printf("%d",fact);
}
 
