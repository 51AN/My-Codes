#include<stdio.h>
int main()
{

    char s[101],t[101];

    scanf("%s %s",&s,&t);

    strrev(s);

    int d = strcmp(s,t);

    if(d==0)
    {
        printf("YES");

    }
    else
        printf("NO");

    return 0;
}
