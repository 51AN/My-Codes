#include<stdio.h>
int main()
{

    char s1[100];

    printf("Enter your full name:");
    gets(s1);

    printf("%s is a genius.\n",s1);




    int i;
    printf("Enter your full name again:");
    gets(s1);

    while(s1[i]!='\0')
    {
        printf("%s is an idiot.",s1[i]);
        i++;
    }
    return 0;
}

