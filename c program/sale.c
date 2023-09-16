// .WAP to calculate commission if sale amount is greater than 1000 then commission =15%. 
#include<stdio.h>

int main() {
    int p,c;
    printf("enter purchase amount");
    scanf("%d",&p);
    if(p>1000)
    {
        c=0.15*p;
        printf("the commission is %d",c);
    }
    

    return 0;
}