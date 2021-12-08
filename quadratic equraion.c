#include<stdio.h>
#include<math.h>
int main()
{

    double a,b,c,d,x1,x2;
    printf("Enter the values of a,b,c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;


    printf("The values of the quadratic equation are: %lf and %lf",x1,x2);

    getch();
    return 0;
}
