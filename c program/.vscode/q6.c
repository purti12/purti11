#include<stdio.h>
int main()
{
    int add,sub,mul,div,mod,a,b;
    printf("\nenter two vlues");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("\nadd=%d\nsub=%d\nmul=%d\ndiv=%d\nmod=%d",add,sub,mul,div,mod);
}