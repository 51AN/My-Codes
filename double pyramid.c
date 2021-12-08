#include<stdio.h>
#include<conio.h>
int main()
{

    int x,row,col;

    printf("Enter any integer number:");
    scanf("%d",&x);

    for(row=1;row<=x;row++)
    {
        for(col=1;col<=x-row;col++)
        {
            printf("  ");

        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("* ");

        }
        printf("\n");
    }

    for(row=x-1;row>=1;row--)
    {
        for(col=1;col<=x-row;col++)
        {
            printf("  ");

        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("* ");

        }
        printf("\n");
    }



    getch();
    return 0;
}


