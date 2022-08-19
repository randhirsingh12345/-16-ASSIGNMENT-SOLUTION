#include<stdio.h>
int main()
 {
     int a[3][3],b[3][3],i,j;
     int sum=0,s=0;
     int sum_of_rows=0,sum_of_column=0;
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
         {
             sum=sum+a[i][j];
         }
         printf("Sum of %d rows %d \n",i+1,sum);
         sum=0;
     }
     printf("\n");
      for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             s=s+a[j][i];
         }
         printf("Sum of %d column  %d \n",i+1,s);
         s=0;
     }

    getch();

 }


