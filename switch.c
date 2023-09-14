#include<stdio.h>
int main()
{
    int a;
    printf("enter any number");
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("one");
         break;
        case 2:printf("two");
         break;
        case 3:printf("three");
         break;

        default:
        printf("not found");
    }
}