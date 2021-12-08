#include<stdio.h>
int main()
{

    char x;

    printf("Enter any letter:");
    scanf("%c",&x);

    if(x>='A' && x<='Z')

    {
        printf("It is a capital letter.");

    }
    else if(x>='a' && x<='z')
    {
        printf("It is a small letter.");

    }
    else
        printf("It is not a letter.");
    getch();
    return 0;
}
