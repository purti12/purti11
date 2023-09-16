#include<stdio.h>
int main()
{
    int num,r,c,sum=0,temp;
    printf("enter any number");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        r=num%10;
        c=r*r*r;
        sum=sum+c;
        num=num/10;
    }
    if(temp==sum)
      {
        printf("%d is an armstrongnumber\n",temp);
        }
    else
    {
        printf("%d is not armstrong number\n",temp);
    }
}