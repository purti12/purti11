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
          printf("\n matrix a is\n");
          for(i=0;i<3;i++)
            {
            for(j=0;j<3;j++)
            {
                if(i+j==0)
                 {
                    sum=sum+a[i][j];
                  }
            }
            }
            for(i=1;i<3;i++)
             { 
               for(j=0;j<3;j++)
               {
                if(i+j==1)
               {
                sum=sum+a[i][j];
               }
                    printf("\t%d",sum);
             }
             }
             for(i=0;i<3;i++)
             {
               for(j=0;j<3;j++)
               {
                if(i+j==0 || i+j==2|| i+j==4)
                {
                    sum=sum+a[i][j];
                }
               }
                printf("\t X shape add is%d",sum);
             }
}
