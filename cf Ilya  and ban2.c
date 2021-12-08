#include<stdio.h>
int main()
{


    char s[15];
    int l;

    scanf("%s",&s);
    l=strlen(s);
    if(s[0]=='-')
    {
        if(s[l-1]>=s[l-2])
        {
            s[l]='\n';
        }
        else if(s[l-1]<s[l-2])
        {
            s[l-2]=s[l-1];
            s[l-1]='\n';
        }

        printf("%s",s);
        return 0;

    }
    else
        printf("%s",s);



    return 0;
}
