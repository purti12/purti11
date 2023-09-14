#include<stdio.h>
int main()
{
    int a=6,b=3,c;
    p1:c=a+b;
    printf("\n%d",c);
    goto p3;
    p2:c=a-b;
    goto p1;
    printf("\n%d",c);
    p3:c=a/b;
    printf("\n%d",c);
    End:printf("\nend");
}

