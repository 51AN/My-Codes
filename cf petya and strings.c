#include<stdio.h>
#include<string.h>

int main()
{

    char s[101],s1[101];

    gets(s);
    gets(s1);

    int x = strcasecmp(s,s1);




    if(x>0) printf("1\n");
    else if(x<0) printf("-1\n");
    else printf("0\n");

    return 0;
}

