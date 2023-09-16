//WAP for addition, subtraction, multiplication and division using switch case. 
#include<stdio.h>
int main()
{
    int n,a,b,add,sub,mul,div;
    printf("enter 1 for addition\nenter 2 for substraction\nenter 3 for multiplication\nenter 4 for division\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
              printf("\n enter 2 nos=");
              scanf("%d%d",&a,&b);
              add=a+b;
              printf("addition is %d",add);
              break; 
        case 2:
              printf("\n enter 2 nos=");
              scanf("%d%d",&a,&b);
              sub=a-b;
              printf("substraction is %d",sub);
              break; 
        case 3:
              printf("\n enter 2 nos=");
              scanf("%d%d",&a,&b);
              mul=a*b;
              printf("multiplication is %d",mul); 
              break;
        case 4:
              printf("\n enter 2 nos=");
              scanf("%d%d",&a,&b);
              div=a/b;
              printf("multiplication is %d",div);  
              break;
        default:
              printf("INVALID OPTION");
              break; 
    }
}