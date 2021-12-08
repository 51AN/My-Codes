#include<stdio.h>
int main()
{
    int num1=10;
    int num2=5;
    int temp;


    temp=num1;//Here the value of num1 is placed in temp and num1 is now empty//
    num1=num2;//Empty num1 is now placed with the value of num2//
    num2=temp;//Empty num2 is placed with the value of temp which was had the value of num1 hence swapped//
    printf("This is number 1:%d \n And this is number 2:%d",num2,num1);


    getch();
    return 0;
}
