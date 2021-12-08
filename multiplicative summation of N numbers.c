//Serie-1*2*3*4*........(can also be used as a factorial program)//
#include<stdio.h>
int main()
{
    int i,x,sum=1;

    printf("Enter the last digit of the series 1*2*3*4*........:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        sum=sum*i;

    }
    printf("The summation of the series is:%d",sum);

    getch();
    return 0;
}
