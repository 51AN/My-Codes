#include<stdio.h>

int main()
{

    int x,row,col;
    printf("Enter a natural number:");
    scanf("%d",&x);
    for(row=1;row<=x;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf(" *");//change this to any character//
        }
        printf("\n");
    }


    getch();
    return 0;
}


