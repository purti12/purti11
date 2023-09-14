#include<stdio.h>
int main()
{
    int s, pi,r,h;
    printf("enter radius and height");
    scanf("%d%d",&r,&h);
    s=2*pi*r*h;
    printf("surface of cylinder is %d",s);
}