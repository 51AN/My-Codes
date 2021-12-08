#include<stdio.h>
int main()
{
    char x;
    double a,s;
    printf("Enter operation(+,-,*,/):");
    scanf("%c",&x);
    printf("Enter two numbers:");
    scanf("%lf %lf",&a,&s);

    if(x=='+')
        printf("%.3lf + %.3lf = %.3lf",a,s,a+s);
    else if(x=='-')
        printf("%.3lf - %.3lf = %.3lf",a,s,a-s);
    else if(x=='*')
        printf("%.3lf * %.3lf = %.3lf",a,s,a*s);
    else if(x=='/')
        printf("%.3lf / %.3lf = %.3lf",a,s,a/s);
    else
        printf("Operation invalid");





    getch();
    return 0;
}
