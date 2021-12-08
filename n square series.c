#include<stdio.h>
int main()
{

    int i,x,sum=0;

    printf("Enter the last digit of the series 1^2+2^2+3^2......:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        sum=sum+i*i;
    }
    printf("The summation of the series is:%d",sum);

    getch();
    return 0;
}
