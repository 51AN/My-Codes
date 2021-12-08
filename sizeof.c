// go to sizeof2//

#include<stdio.h>


int main ()
{
    int i;
    float f;
    double b;
    char c;

    printf("The size of an Integer is = %d",sizeof(i));
    printf("\nThe size of a Float is = %f",sizeof(f));
    printf("\nThe size of a Double is = %lf",sizeof(b));
    printf("\nThe size of a Character is = %c",sizeof(c));
    getch();
    return 0;
}
