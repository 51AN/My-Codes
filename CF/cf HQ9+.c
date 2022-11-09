#include<stdio.h>
int main()
{
    int i;

    char s[101];

    scanf("%s",&s);
    int  l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            printf("YES");
            return 0;
        }

    }
    printf("NO");
    return 0;
}
