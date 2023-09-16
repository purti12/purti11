#include<stdio.h>
int main()
{
    int p,c,m,b,e;
    float per;
    printf("\n enter five subject marks");
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&e);

    per=((p+c+m+b+e)*100)/250;
    printf("percentage=%f",per);
    if(per>=90)
    {
        printf("A+");
    }
     else if(per>80 && per<89)
{
 printf("A");
}
    else if(per>70 && per<79)
    {
        printf("B+");
    }
    else if(per>60 && per<69)
        {
        printf("B");
        }
        else if(per>50 && per<59)
        {
        printf("C");
        }
        else
         {
        printf("fail");
        }
}
