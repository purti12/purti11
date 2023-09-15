#include<stdio.h>
void area(int);
main()
{
    int s;
    printf("enter side");
    scanf("%d",&s);
    area(s);
}
void area(int n)
{
    printf("%d",n*n);
}
