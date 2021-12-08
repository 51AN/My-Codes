#include<stdio.h>
#include<conio.h>
int main()
{

    int x,row,col;

    printf("Enter any integer number:");
    scanf("%d",&x);

    for(row=1;row<=x;row++)
    {
        for(col=1;col<=x;col++)
        {
           if(col==row||row+col==x+1)
            {
                printf("*");
            }
            else
                {
                    printf(" ");
                }
        }
            printf("\n");
        }


    getch();
    return 0;
}


