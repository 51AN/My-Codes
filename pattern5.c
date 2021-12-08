#include<stdio.h>

int main()
{

    int x,row,col;
    printf("Enter a natural number:");
    scanf("%d",&x);
    for(row=x;row>=1;row--) //changed here//
    {
        for(col=1;col<=row;col++)
        {
            printf(" %d",col);//change this to row for a different pattern//
        }                     //now use this to make every other inverse patter//
        printf("\n");
    }


    getch();
    return 0;
}


