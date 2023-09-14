#include<stdio.h>
int main()
{
    int n,num,sum=0;

    printf("enter five digit number");
    scanf("%d",&num);
    while(num!=0)
    {
        n=num%10;
        sum=sum+n;
        num=num/10;
        

}
printf("sum is %d",sum);
        
}