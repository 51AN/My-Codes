//Very wrong approach. Go see prime number//

#include<stdio.h>
#include<conio.h>
int main()
{

    int i;

    printf("Enter any natural number:");
    scanf("%d",&i);
    if(i==1)
    {
        printf("Not a prime number.");
    }
    else if(i<=0)
        printf("Invalid Input.");
    else if(i==2,3,4,5)
            printf("Prime number");

    else{

        if(i%2==0||i%3==0||i%4==0||i%5==0)
        {
            printf("Not a prime number.");
        }
        else
            printf("Prime number.");


    }
    getch();
    return 0;
}
