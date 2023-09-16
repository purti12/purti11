#include<stdio.h>
int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    if(n%8==0 && n%5==0)
    { 
        printf("number is divisible by 8 and 5");
    }
    else if(n%8==0)
    {
        printf("number is divisible of 8");
    }
    else if(n%5==0)
    {
        printf("number is divisible by 5");
    }
    else
    {
        printf("number is not divisible by 8 and 5");
    }
}