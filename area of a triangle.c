#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter the base of the triangle:");
    scanf("%f",&b);
    printf("Enter the height of the triangle:");
    scanf("%f",&h);
    //here using %.2f will crash the input//

    area=(float)1/2*b*h;
    /*here using 1/2 will produce no answer since 1 is and integer value.so using
    type casting will work here, e.g.(float)1/2*/

    printf("\nThe area of the triangle is:%.2f",area);

    getch();
    return 0;
}
