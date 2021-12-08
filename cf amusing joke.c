#include<stdio.h>
int main()
    {
    char s[101];
    char a[101];
    char c[101];
    scanf("%s",&s);
    scanf("%s",&a);
    scanf("%s",&c);
    strcat(s,a);


    int i,j,lc,ls,x=0,cnt=0;
    lc=strlen(c);
    ls=strlen(s);

    for(i=0;i<ls;i++)
    {
        for(j=i+1;j<ls;j++)
        {
            if(s[i]>s[j])
            {
                x=s[i];
                s[i]=s[j];
                s[j]=x;
            }
        }
    }


    for(i=0;i<lc;i++)
    {
        for(j=i+1;j<lc;j++)
        {
            if(c[i]>c[j])
            {
                x=c[i];
                c[i]=c[j];
                c[j]=x;
            }
        }
    }


    if(ls!=lc)
    {
        printf("NO");
        return 0;
    }
    else
    {
        for(i=0;i<ls;i++)
        {
            if(s[i]==c[i])
            {
                cnt++;

            }
        }

    }

    if(cnt==ls)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    return 0;
    }
