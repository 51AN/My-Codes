#include<stdio.h>

int main ()
{

    int a,b,x;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    x = a>b ? a : b; //not that important//
    printf("The larger number is %d", x);

    getch();
    return 0;




}
