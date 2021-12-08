#include<stdio.h>

int main()
{

    int x,row,col;
    printf("Enter a natural number:");
    scanf("%d",&x);

    for(row=1;row<=x;row++)
    {
        for(col=1;col<=x-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("%d",col);//change this to row for a different pattern//
        }
        printf("\n");
    }



    getch();
    return 0;
}

