#include<stdio.h>
int main()
{
    int n,cnt1=0,cnt0=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            cnt1++;
        }
        else if(s[i]=='0')
        {
            cnt0++;
        }
    }
    if(cnt0!=cnt1)
    {
        printf("1\n");
        printf("%s",s);
    }
    else
    {
        printf("2\n");
        for(int i=0;i<cnt0;i++)
        {
            printf("0");
        }
        printf(" ");
        for(int i=0;i<cnt1;i++)
        {
            printf("1");
        }

    }

    return 0;
}
