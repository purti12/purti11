#include<stdio.h>
void even(int);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    even(n);
}
void even(int a)
{
   if (a%2==0)
   {
    printf("even number");

   }
   else
   {
  printf("odd number");
   }
}