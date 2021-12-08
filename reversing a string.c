#include<stdio.h>
int main()
{

    int i;
    char s[40],s1[40];
    printf("Enter a string:\n");
    gets(s);

    int len = strlen(s);

    for(i=0;len>=0;len--,i++)
    {
        s1[i]=s[len-1];
    }
    s1[i]='\0';
    /*strrev(s);

    printf("The reverse of the given string is:\n%s", s);*/

    return 0;
}
