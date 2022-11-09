#include<stdio.h>

int main()
{
    char s[101];

    int i;

    scanf("%s",&s);

    if(s[0]<=122&&s[0]>=97)
    {
        s[0]=(s[0]-97)+65;
                for(i=1;i<strlen(s);i++)
        {
            s[i]=(s[i]-65)+97;
        }
    }
    else if(s[1]<=122&&s[1]>=97&&s[0]<=90&&s[0]>=65)
    {
        printf("%s",s);
        return 0;
    }

    else if(s[1]<=90&&s[1]>=65&&s[0]<=90&&s[0]>=65)
    {
        for(i=1;i<strlen(s);i++)
        {
            s[i]=(s[i]-65)+97;
        }
    }

    printf("%s",s);
    return 0;
}
