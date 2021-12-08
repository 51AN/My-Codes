#include<stdio.h>
#include<string.h>

int main()
{

    char s[30],s1[30];
    printf("Enter first string:");
    gets(s);
    printf("Enter second string:");
    gets(s1);

    int d = strcasecmp(s,s1);

    if(d==0)
    {
        printf("The strings are same.");

    }
    else
        printf("The strings are not the same.");


        printf("\n%d",d);



    return 0;
}
