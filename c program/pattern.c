#include<stdio.h>
int main()
{
    int r=65,c;
    while(r<=69)
    {
        c=65;
        while(c<=r)
        {
            printf(" %c",c);
            c++;
        }

    
    printf("\n");
    r++;
}
}