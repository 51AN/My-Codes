#include<stdio.h>
#include<math.h>
int main()
{

    float r,area;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);

    area= M_PI*r*r;
    //You can use 3.1416 here instead of M_PI, in that case #include<math.h> is not necessary//
    printf("The are of the circle is:%.3f",area);


    getch();
    return 0;
}
