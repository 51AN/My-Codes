#include<stdio.h>
int main()
{
    char lower, upper;
    printf("Enter a lowercase letter:");
    scanf("%c",&lower);
    upper=toupper(lower);
    //Here toupper is the library function to turn a lowercase character to an uppercase character//
    printf("The uppercase of the given letter is:%c",upper);




    getch();
    return 0;

}
