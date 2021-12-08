#include<stdio.h>

int main()
{
    float c=0,x;

    int i;

    printf("1. Fahrenheit\n2. Kelvin \n3. Rankine\n4. Reaumer\n");

    printf("\nWhich temperature would you like to input? (Select between 1-4):\n");

    scanf("%d",&i);

    while(i>4||i<1)
    {
        printf("Invalid input!!! Enter again between the given range (1-4)\n");

        printf("\n1. Fahrenheit\n2. Kelvin \n3. Rankine\n4. Reaumer");

        scanf("%d",&i);
    }

    printf("\nNow enter the value:\n");

    scanf("%f",&x);

    if(i==1)
    {
        c=((float)5/9)*(x-32);

    }
    else if(i==2)
    {
        c=x-273.15;
    }
    else if(i==4)
    {
        c=1.25*x;
    }
    else
    {
        c=((float)5/9*(x-491.67));
    }


    printf("The Celsius temperature is : %.3f degrees.",c);


    return 0;
}
