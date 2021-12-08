
#include<stdio.h>
int main()
{

    int n;
    printf("Enter a decimal number=");
    scanf("%d",&n);
    printf("The octal number is=%o",n);

    // Here the format specifier %o is used to convert the decimal integer to octal integer//
    // To convert to hexadecimal, use the FS %x//
    getch();
    return 0;
}
