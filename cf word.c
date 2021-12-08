#include<stdio.h>
#include<string.h>

int main()
{

    char s[101];

    int i,cntA=0,cnta=0;
    char c;

    scanf("%s",&s);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {


       if(s[i]>=65&&s[i]<=90)
       {
            cntA++;
       }
       else if(s[i]>=97&&s[i]<=122)
        {
            cnta++;
        }

    }

    if(cnta>=cntA)
    {
        strlwr(s);
    }
    else if(cntA>cnta)
    {
        strupr(s);
    }
    printf("%s",s);


    return 0;
}
