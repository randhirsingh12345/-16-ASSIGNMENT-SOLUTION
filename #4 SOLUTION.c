#include<stdio.h>
int main()
 {
     int a[3][3],b[3][3],i,j;
     int sum=0;
     printf("Enter nine element for  matrix: ");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
     }
      printf(" Matrix are :- \n");
    printf("-----------------\n");
    for(i=0;i<=2;i++)
    {
         for(j=0;j<=2;j++)
         {
              printf("|%2d | ",a[i][j]);
         }
         printf("\n");
    }
     printf("-----------------\n");
    sum=sum+a[0][0]+a[1][1]+a[2][2];
    printf("Sum of right diagonal element are %d ",sum);
    getch();

 }
