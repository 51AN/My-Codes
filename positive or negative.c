#include<stdio.h>
int main ()
{

    float x;
    printf("Enter any number:");
    scanf("%f",&x);

    if (x>0)
    {
        printf("The number %f is positive.",x);

    }
    else if (x<0)
    {
        printf("The number %f is negative.",x);

    }
    else
        printf("Equals to your life.");

    getch();
    return 0;
}
