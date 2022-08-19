//write a program to multiply 3x3 matrix
 #include<stdio.h>
 int main()
 {
     int a[3][3],b[3][3],c[3][3],sum=0,i,j,k;
     printf("Enter nine element for first matrix: ");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
     }
     printf("Enter nine element for second matrix: ");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);
     }
    printf("First Matrix are :- \n");
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
     printf("Second Matrix are :- \n");
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

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=0;k<=2;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    printf("After multiplication of matrix A and Matrix B are : -\n");
     printf("---------------------\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("|%3d  |",c[i][j]);
        }
        printf("\n");
    }
     printf("---------------------\n");

          getch();


 }
