#include<stdio.h>
int main()
{
    int i;
    char s[1000];

    scanf("%s",&s);


    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=65&&s[i]<90)
        {
            s[i]=97+s[i]-65;
        }
    }
    printf("%s",s);



    return 0;
}
