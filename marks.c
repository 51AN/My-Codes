#include<stdio.h>
int main ()
{
    int x;

    printf("Enter your marks:");
    scanf("%d",&x);
    if(x>100||x<0)
    {
        printf("Invalid marks.");

    }
    else if(x<=100&&x>=90)
        printf("A+\nExcellent");

    else if(x<=90&&x>=80)
        printf("A+\nSplendid");

    else if(x<=80&&x>=70)
        printf("A\Good");

    else if(x<=70&&x>=60)
        printf("A-\nTry harder");

    else if(x<=60&&x>=50)
        printf("B\nBetter start studying");

    else if(x<=50&&x>=33)
        printf("C\nOn the way out");

    else if(x<=33&&x>0)
        printf("F\nGet a life");

    else
    {
        printf("You should not exist.");
    }


    getch();
    return 0;
}
