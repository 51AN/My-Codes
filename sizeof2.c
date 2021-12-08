#include<stdio.h>
int main ()
{
    int i;
    float f;
    double b;
    char c;

    printf("The size of an Integer is = %zu",sizeof(i));
    printf("\nThe size of a Float is = %zu",sizeof(f));
    printf("\nThe size of a Double is = %zu",sizeof(b));
    printf("\nThe size of a Character is = %zu",sizeof(c));

    // For sizeof use the format specifier %zu //
    getch();
    return 0;
}
