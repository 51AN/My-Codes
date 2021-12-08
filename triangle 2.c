#include<stdio.h>

int main()
{

    int x,row,col;

    printf("Enter any integer number:");
    scanf("%d",&x);

    for(row=1;row<=x;row++)
    {
        for(col=1;col<=x;col++)
        {
           if(col==x||row==1||col==row)
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



    return 0;
}

