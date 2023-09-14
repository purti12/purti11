#include<stdio.h>
int main()
{
    int DA,BS,HRA,PF,TA,GS,NS;
    printf("enter basic salry");
    scanf("%d",&BS);
    DA=0.4*BS;
    HRA=0.25*BS;
    PF=0.2*BS;
    TA=0.3*BS;
    GS=BS+DA+HRA+TA;
    NS=GS-PF;
    printf("gross salaryis=%d\nnet salary is=%d",GS,NS);
}