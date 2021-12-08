#include<stdio.h>
int main()
{

    int a,b,c,sum;
    float avg;

    printf("Enter the first number:");
    scanf("%d",&a);

    printf("\nEnter the second number:");
    scanf("%d",&b);

    printf("\nEnter the third number:");
    scanf("%d",&c);
//Do not use this dumb method, though it is convenient for the end user. Always take inputs in a single line//
    sum=a+b+c;
    avg=(float)sum/3;
    printf("\nThe summation of the three numbers is:%d",sum);
    printf("\nThe average of the three numbers is:%.2f",avg);

    getch();
    return 0;
}
