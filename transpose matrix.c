#include<stdio.h>
#include<conio.h>
int main ()
{

    int i,j,k,r1,c1,a[10][10],transpose[10][10];

    printf("Enter rows and column for the matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the elements for the matrix:\n");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           printf("[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
       }
   }

for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
     transpose[j][i]=a[i][j];
    }
}

//printing these matrices//
printf("\n");
printf("Entered matrix:\n");
   for(i=0;i<r1;i++)
   {
       printf("\n");
       for(j=0;j<c1;j++)
       {
        printf("%d ",a[i][j]);
       }
   }
printf("\n");
printf("\n");
printf("Transpose matrix:\n");
   for(i=0;i<c1;i++)
   {
       printf("\n");
       for(j=0;j<r1;j++)
       {
        printf("%d ",transpose[i][j]);
       }
   }



    getch();
    return 0;
}

