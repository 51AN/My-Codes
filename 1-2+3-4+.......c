#include<stdio.h>

int main()
{

    int i,x,sum=0;

    printf("The last digit of the series 1-2+3-4+.....:");
    scanf("%d",&x);

    for(i=1;i<=x;i=i+2)
    {
        sum=sum+(i-(i+1));
    }

    printf("The summation of the series is:%d",sum);

    getch();
    return 0;
}

