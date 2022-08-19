#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][4],i,j;
    printf("Enter Twevel element for first matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
     printf("Enter Twevel element for second matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];

      printf("-----------------------------\n");
    for(i=0;i<3;i++)
      {
           for(j=0;j<3;j++)
       {
           printf("|%2d|\t",c[i][j]);

       }
       printf("\n");
      }
      printf("-----------------------------");
    getch();
}
