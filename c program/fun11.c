#include<stdio.h>
void sw(int,int);
int main()
{
 int a,b;
 printf("enter value of a and b");
 scanf("%d%d",&a,&b);
 sw(a,b);
}
void sw(int i,int j)
{
    int k;
   i=j;
   j=k;
   k=i;
   printf("%d%d",i,j);
}