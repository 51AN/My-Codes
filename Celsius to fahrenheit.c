#include<stdio.h>
int main()
{

    float f,c;

    printf("Enter Celsius temperature:");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("The Fahrenheit temperature is %f degrees",f);


    getch();
    return 0;
}
