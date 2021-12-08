#include<stdio.h>
int main()
{
    int t,i;
    char s[101];
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {


    scanf("%s",&s);

    printf("%s",s[0]);

    for(i=1;i<strlen(s);i=i+2)
    {
        printf("%s",s[i]);
    }

    }
    return 0;
}
