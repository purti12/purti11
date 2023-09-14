#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("\n enter elements");
    for(i=0;i<3;i++)
    { 
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        } 
     }
          printf("\n matrix \n");
          for(i=0;i<3;i++)
            {
            for(j=0;j<3;j++)
            {
                printf("\t %d",a[i][j]);
            }
             printf("\n");
            }
            for(i=0;i<3;i++)
            {   
                for(j=0;j<3;j++)
                {
                    if(i==1 && j==0|| i==1 &&j==2)
                    {
                      continue;  
                    }
                    sum=sum+a[i][j];
                }
            }
             
            
               printf("\t%d",sum);
}
            