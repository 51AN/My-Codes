#include<stdio.h>
#include<conio.h>

int main()
{

    int i,j,r,c,sum=0,a[10][10],upperSum=0,lowerSum=0;

    printf("Enter the row and column of the matrix:");

    scanf("%d %d",&r,&c);

    printf("Enter the elements of the matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

               printf("[%d][%d]= ",i,j);
               scanf("%d",&a[i][j]);
        }
      printf("\n");

    }
    printf("The matrix is:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

               printf("\t%d",a[i][j]);
        }
      printf("\n");

    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j)
            {
                upperSum = upperSum + a[i][j];

            }
            if (i>j)
            {
                lowerSum = lowerSum + a[i][j];

            }
        }
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }


printf("The summation of the upper triangle of the matrix is: %d\n",sum+upperSum);
printf("The summation of the lower triangle of the matrix is: %d",sum+lowerSum);


    getch();

    return 0;
}

