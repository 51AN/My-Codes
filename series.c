//1*2+2*3+3*4+.......//
#include<stdio.h>
int main ()
{

    int i,x,sum=0;

    printf("Enter the last number of the series 1*2+2*3+3*4+.......:");
    scanf("%d",&x);

    for(i=1;i<x;i++)//here it will not be i<=x because i needs to be less than x in these series//
    {
        sum=sum+(i*(i+1));

    }

    printf("The summation of the series is:%d",sum);
    getch();
    return 0;
}
