//1*2+2*3+3*4+4*5.........//
#include<stdio.h>

int main()
{

    int x,y,a=1,b=2,sum;

    printf("Enter the last two digits(small to big)of the series:");
    scanf("%d %d",&x,&y);


    while(a<=x &&b<=y)
    {
        sum=sum+a*b;
        a++;// use a=a+1; to change the difference between numbers e.g a=a+2; making more diverse series//
        b++;// use b=b+1; to change the difference between numbers e.g b=b+2; making more diverse series//
    }

    printf("The summation of the series is:%d",sum);

    getch();
    return 0;
}
