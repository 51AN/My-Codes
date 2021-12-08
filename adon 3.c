#include<stdio.h>

int main()
{
    char c;
    printf("Enter a lowercase character:\n");
    scanf("%c",&c);

    c=c-97+65;

    printf("Enter a uppercase character:\n");
    printf("%c",c);




    return 0;
}
