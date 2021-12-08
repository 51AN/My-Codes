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
            printf(" %c",col+96);//change this to row for a different pattern//
        }                        //here 65 is the ascii value for A//
        printf("\n");            //ascii value for a is 97//
    }


    getch();
    return 0;
}


