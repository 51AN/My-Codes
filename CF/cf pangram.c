#include<stdio.h>
int main()
{

    int f[26]={0};
    int cnt,i,x;
    char c[100];
    scanf("%s",&c);

    int l=strlen(c);
    for(i=0;i<l;i++)
    {
        if(c[i]>=65&&c[i]<=90)
        {
            c[i]=c[i]-65+97;
        }
    }

    for(i=0;i<l;i++)
    {
        x=c[i]-97;
        f[x]=f[x]+1;

    }
    for(i=0;i<26;i++)
        {
            if(f[i]!=0)
            {
            cnt++;
           }
        }


if(cnt==26)
{
    printf("YES");

}
else
    printf("NO");
return 0;
}
