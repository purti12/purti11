#include<stdio.h>
int main()
{
int n,c=0,i;
printf("enter number");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
    if(n%i==0)
    {
        c++;
    }
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
