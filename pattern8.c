#include<stdio.h>
#include<conio.h>
int main()
{

    int x,row,col;
    printf("Enter any natural number:");
    scanf("%d",&x);

    for(row=x;row>=1;row--)
    {
        for(col=1;col<=x-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }




    getch();
    return 0;
}
