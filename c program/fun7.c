#include<stdio.h>
void area(int);
main()
{
    int a;
     /* printf("enter 2 number");
    scanf("%d%d",&a,&b);  */
    area(a);
}
void area(int a1)
{
    int l,b;
    printf("enter 2 number");
    scanf("%d%d",&l,&b); 
    a1=l*b;

printf("%d",a1);
}