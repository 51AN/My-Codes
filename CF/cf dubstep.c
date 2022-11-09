#include<stdio.h>

int main(void)
{
    char s[201];
    int i;
    scanf("%s",&s);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i=i+2;
            printf(" ");
        }
        else
            printf("%c",s[i]);

    }
}
