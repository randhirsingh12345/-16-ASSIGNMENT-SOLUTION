#include<stdio.h>
int main()
 {
     int a[3][3],i,j;
     int count=0;
     int sum_of_rows=0,sum_of_column=0;
     printf("Enter nine element for  matrix: ");

     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
     }

    printf("\n Matrix are :- \n");
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
             if(a[i][j]==0)
                count++;
         }
       }
     //  printf("%d\n ",count);
    if(count>9/2)
        printf("Given matrix is a Sparse Matrix ");
    else
        printf("Given matrix is not a  Sparse Matrix ");

     getch();

 }
