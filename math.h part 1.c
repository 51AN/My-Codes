#include<stdio.h>
#include<stdio.h>
int main()
{

    double x,y;
    printf("Enter any real number:");
    scanf("%lf",&y);

    x=log(y);//Here log represents, log to the base e, in other words, ln//
    printf("\nThe ln value of the number is:%lf",x);

    x=log10(y);
    printf("\nThe log10 value of the number is:%lf",x);

    x=exp(y);
    printf("\nThe exponential value of the numbers is:%lf",x);

    x=sin(y);
    printf("\nThe sin value of the number is:%lf",x);

    x=cos(y);
    printf("\nThe cos value of the number is:%lf",x);

    x=tan(y);
    printf("\nThe tan value of the number is:%lf",x);

    x=round(y);//round function takes out any number(which is less than .5)after the decimal point. If the number is greater of equal of 0.5, than it will add 1 to the number//
    printf("\nThe rounded value of the number is:%lf",x);

    x=trunc(y);//this function will only show the integer part(no number after the decimal point//
    printf("\nThe integer value of the number is:%lf",x);

    x=ceil(y);
    printf("\nThe ceiling value of the number is:%lf",x);

    x=floor(y);
    printf("\nThe floor value of the number is:%lf",x);


    /*Remember in the ceiling and floor functions, if the number is negative
     then floor function will be the lower number,e.g. if -1.5 is the
     number then floor will be -2. For ceiling function it will be -1*/






    getch();
    return 0;
}
