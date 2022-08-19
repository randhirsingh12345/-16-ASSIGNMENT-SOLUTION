#include<stdio.h>
int main()
 {
     int a[3][3],b[3][3],i,j;
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

     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
             b[i][j]=a[j][i];
     }
    printf(" Transpose of Matrix is :-\n");
    printf("-----------------\n");
    for(i=0;i<=2;i++)
    {
         for(j=0;j<=2;j++)
         {
              printf("|%2d | ",b[i][j]);
         }
         printf("\n");
    }
    printf("-----------------\n");
    getch();
 }

