#include<stdio.h>
int main()
{
    int t,p,c,m,b,e,avg;
    printf("\n enter value of five subject");
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&e);
    t=p+c+m+b+e;
    avg=t/5;
    printf("\n total is %d",t);
    printf("\n average is %d",avg);
}