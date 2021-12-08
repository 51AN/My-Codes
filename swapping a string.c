#include<stdio.h>
int main()
{

    char s[30];
    char s1[30];
    char temp[30];

    printf("Enter the first string:");
    gets(s);
    printf("Enter the second string:");
    gets(s1);

    strcpy(temp,s);
    strcpy(s,s1);
    strcpy(s1,temp);

    printf("The first string is now :%s\nAnd the second string is now: %s",s,s1);

    return 0;
}
