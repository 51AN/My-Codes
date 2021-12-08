#include<stdio.h>

int main()
{
    float f,c=0;

    printf("Enter Fahrenheit value:");
    scanf("%f",&f);

    c=((float)5/9*(f-32));

    printf("The Celsius value of %.3f is : %.3f",f,c);

    return 0;
}
