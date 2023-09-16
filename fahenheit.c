#include<stdio.h>
int main()
{
    int n,n1,n2,f,c;
    printf("enter 1 for celcius to fahrenheit\nenter 2 for farrenheit to celcius");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("enter celcius degree");
            scanf("%d",&n1);
            f=(1.8*n1)+32;
            printf("fahrenheit degree is %d",f);
            break;
        case 2:
            printf("enter fahrenheit degree");
            scanf("%d",&n2);
            c=(n2-32)/1.8;
            printf("celsius degree is %d",c);
            break;
        default:
            printf("invalid");
    }
}