#include<stdio.h>
int main()
{
    int divident,divisor,Quotient,Remainder;
    printf("enter the divident and divisor=");
    scanf("%d%d",&divident,&divisor);
    Quotient=divident / divisor;
    Remainder=divident % divisor;
    printf("\nQuotient is = %d \nRemainder is = %d",Quotient,Remainder);
}