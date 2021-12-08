#include<stdio.h>
int main()
{

    int a=10,b=22;

    b=a-b;
    a=a-b;
    b=a+b;

    printf("Number 1:%d \nNumber 2:%d",a,b);


    getch();
    return 0;
}
