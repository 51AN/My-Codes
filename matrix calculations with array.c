#include<stdio.h>
int main()
{

    int i,j,A[10][10],B[10][10],C[10][10],x=0,y=0;

    printf("Please Enter the dimension of the matrix A:");
    scanf("%d %d",&i,&j);

    for(x=0;x<i;x++)
    {
        for(y=0;y<j;y++)
        {
        printf("A[%d][%d] =",x,y);
        scanf("%d",&A[x][y]);
        }
        printf("\n");
    }


    printf("Please Enter the dimension of the matrix B:");
    scanf("%d %d",&i,&j);

    for(x=0;x<i;x++)
    {
        for(y=0;y<j;y++)
        {
        printf("B[%d][%d] =",x,y);
        scanf("%d",&B[x][y]);
        }
        printf("\n");
    }

    for(x=0;x<i;x++)
    {
        for(y=0;y<j;y++)
        {

        C[x][y]=A[x][y] + B[x][y];//change this to the operator you desire//

        }

    }

    printf("The addition of the two matrices is C =\n ");

    for(x=0;x<i;x++)
    {
        for(y=0;y<j;y++)
        {
            printf("\t%d",C[x][y]);
        }
        printf("\n");
    }




    return 0;
}

