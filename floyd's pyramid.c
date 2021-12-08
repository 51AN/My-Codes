#include<conio.h>
#include<stdio.h>

int main()
{

    int x,row,col,count=1;
    printf("Enter a natural number:");
    scanf("%d",&x);

    for(row=1;row<=x;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf(" %d",count++);
        }
        printf("\n");
    }


    getch();
    return 0;
}
