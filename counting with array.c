#include<stdio.h>
int main()
{
    int i;
    char s[20];
    printf("Enter your name:");
    gets(s);

    while(s[i]!='\0')
    {
        i++;
    }
    printf("Number of characters are %d",i);




    return 0;

}
