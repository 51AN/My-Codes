#include<stdio.h>

int main()
{
    printf("Enter a string:");

    char s[30],s1[30];
    gets(s);
    strrev(s);
    strcpy(s1,s);


    strrev(s);

    int d = strcmp(s,s1);

    if(d==0)
        printf("It is a palindrome number.");
    else
        printf("It is not a palindrome number.");
    return 0;
}
