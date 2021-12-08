#include<stdio.h>

int main ()
{
    int a,b,sum;
    printf("Enter the first integer = ");
    scanf(" %d", &a);
    printf("Enter the second integer =");
    scanf("%d", &b);
    sum=a+b;
    //Here apparently, you can not use a+b=sum or else pro. won't run//
    printf("\nThe summation of the given two integers are = %d", sum);
    // Here the \n is to represent a new line //

    getch();
    return 0;
}
