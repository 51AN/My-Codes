#include<stdio.h>
#include<conio.h>
int main ()
{

    int i,j,k,r1,c1,r2,c2,first[10][10],second[10][10],result[10][10],sum=0;

    printf("Enter rows and column for first matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for second matrix:");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("There is error in matrix, input rows and columns again.");

    printf("\nEnter rows and column for first matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for second matrix:");
    scanf("%d %d",&r2,&c2);

    }
printf("Enter the elements for the first matrix:\n");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           printf("[%d][%d] = ",i,j);
           scanf("%d",&first[i][j]);
       }
   }
printf("Enter the elements for the second matrix:\n");
      for(i=0;i<r2;i++)
   {
       for(j=0;j<c2;j++)
       {
           printf("[%d][%d] = ",i,j);
           scanf("%d",&second[i][j]);
       }
   }

//multiplying matrices //
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        for(k=0;k<c1;k++)
        {
            sum=sum+first[i][k]*second[k][j];

        }
        result[i][j]=sum;
        sum=0;
    }
}

//printing these matrices//
printf("\n");
printf("First matrix:\n");
   for(i=0;i<r1;i++)
   {
       printf("\n");
       for(j=0;j<c1;j++)
       {
        printf("%d ",first[i][j]);
       }
   }
   printf("\n");
   printf("\n");
printf("Second matrix:\n");
      for(i=0;i<r2;i++)
   {
       printf("\n");
       for(j=0;j<c2;j++)
       {
            printf("%d ",second[i][j]);
       }
   }
   printf("\n");
   printf("\n");
printf("Result matrix:\n");
      for(i=0;i<r1;i++)
   {
       printf("\n");
       for(j=0;j<c2;j++)
       {
            printf("%d ",result[i][j]);
       }
   }

    getch();
    return 0;
}
