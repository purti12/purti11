 #include<stdio.h>
int main()
{
    int n,num1,num2,num3,num4,i,c=0,r,temp=0,s1,r1,rev=0,temp1=0;
    printf(" enter 1 for even odd\n enter 2 for prime number\n enter 3 for armstrong number\n enter 4 for palindrome number=");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\n enter the number=");
        scanf("%d",&num1);
        if(num1%2==0)
        {
            printf("\n it is a even number");
        }
        else{
            printf("\n it is a odd number");
        }
        break;

        case 2:
        printf("\n enter the number=");
        scanf("%d",&num2);
        for(i=2;i<=num2;i++)
        {
            if(num2%i==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("\nit is a prime number");
        }
        else
        {
            printf("\nit is not a prime number");
        }
        break;

        case 3:
        printf("\n enter the number=");
        scanf("%d",&num3);
        temp=num3;
        while(num3>0)
        {
        r=num3%10;
        s1=s1+r*r*r;
        num3=num3/10;
        }
        if(temp==s1)
        {
            printf("\nit is a armstrong number");
        }
        else
        {
            printf("\nit is not a armstrong number");
        }
        break;

        case 4:
        printf("\n enter the number=");
        scanf("%d",&num4);
        temp1=num4;
        while(num4!=0)
        {
            r1=num4%10;
            rev=rev*10+r1;
            num4=num4/10;
        }
        if(temp1==rev)
        {
            printf("\nit is a palindrome number");
        }
        else
        {
            printf("\nit is not a palindrome number");
        }
        break;
        default:
        printf("invalid option");
    }
}
