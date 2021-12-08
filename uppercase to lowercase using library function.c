#include<stdio.h>
int main()
{
    char lower, upper;
    printf("Enter a uppercase letter:");
    scanf("%c",&upper);
    lower=tolower(upper);
    //Here tolower is the library function to turn a uppercase character to an lowercase character//
    printf("The lowercase of the given letter is:%c",lower);




    getch();
    return 0;

}

