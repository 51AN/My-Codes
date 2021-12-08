
#include<stdio.h>
#include<conio.h>
int main()
{

    int x,row,col;
    printf("Enter any natural number:");
    scanf("%d",&x);

    for(row=1;row<=x;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }



    getch();
    return 0;
}

