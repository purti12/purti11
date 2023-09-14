#include<stdio.h>
int main()
{
    int i,sum=0;
    int n[5]={2,3,4,5,6};
    for(i=0;i<=4;i++)
    {
        sum=sum+n[i];
    }
    printf("%d",sum);
}