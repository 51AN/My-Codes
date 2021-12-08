#include<stdio.h>
int main ()
{

    int x,y;

    printf("Enter an integer number:");
    scanf("%d",&x);

    if (x%2==0)
    {//this works without this bracket//

        printf("The number is even.");

    }
    else
    {//also without this. However without this, then it will only execute one statement under it//

    printf("The number is odd.");
    }
    getch();
    return 0;
}
