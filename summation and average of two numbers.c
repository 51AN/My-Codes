#include<stdio.h>
int main ()
{
    int a,b,sum;
    float avg;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    sum=a+b;
    avg=(float)sum/2;
    /*this is called type casting, without this sum will be an integer value
    resulting into not producing any decimal point values in avg*/
    printf("Summation of the given numbers is:%d",sum);
    printf("\nAverage of the given numbers is:%.2f",avg);

    getch();
    return 0;
}
