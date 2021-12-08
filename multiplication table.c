#include<stdio.h>
int main()
{

    int i,x,y;

    printf("Enter any integer number:");
    scanf("%d",&x);

    for(i=1; i<=10; i++)
    {
        y=x*i;
        printf("%d X %d = %d\n",x,i,y);
    }



    getch();
    return 0;
}
