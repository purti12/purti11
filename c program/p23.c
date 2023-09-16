#include<stdio.h>
int main()
{
    int a=6,b=19,c=16,d=7;
    if(a>b && a>c && a>d)
    {
      printf("a is greater");

     }
    else if(b>c && b>d)
    { 
        printf("b is greater");
    }
else if(c>d)
{
    printf("c is greater");
}
else
{
 printf("d is greater");
}
}