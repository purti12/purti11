#include<stdio.h>
int main()
    {
        int n,a,b,c,d,sum;
        printf("enter four digit number");
        scanf("%d",&n);
        a=n/1000;
        b=n/100%10;
        c=n/10%10;
        d=n%10;
        sum=d*1000+c*100+b*10+a*1;
        printf("%d",sum);

    

    }