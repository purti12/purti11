#include<stdio.h>
int add(void);
main()
{
    int ans;
    ans=add();
    printf("%d",ans);
}
int add (void)

{
    int a,b, c;
    a=10,b=20;
    c=a+b;
    return c;
}