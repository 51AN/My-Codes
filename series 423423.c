#include<stdio.h>
int main()
{
    int i,x;// or you can take all of these to float //
    float sum=0;

    printf("Enter the last digit of the series 1/2+2/2+3/2......:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        sum=sum+ ((float)1/i); //changed by type casting here//
    }
    printf("The summation of the series is:%f",sum);

    getch();
    return 0;
}

