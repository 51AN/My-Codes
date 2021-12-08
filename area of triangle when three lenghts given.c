#include<stdio.h>
#include<math.h>

int main()
{

    float a,b,c,s,area;
    printf("Enter the three lengths of the triangle keeping a space between them each:");
    scanf("%f %f %f",&a ,&b ,&c);

    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is:%.3f",area);

    getch();
    return 0;
}
