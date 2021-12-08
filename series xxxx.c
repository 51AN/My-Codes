#include<stdio.h>
int main()
{
    int i,x,sum=0;

    printf("Enter the last digit of the series 1*5+2*5+3*5.......:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        sum=sum+i*5;
    }
    printf("The summation of the series is:%d",sum);

    getch();
    return 0;

}
