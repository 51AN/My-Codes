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

if(cnt%2!=0)
{
    printf("IGNORE HIM!");

}
else
{
    printf("CHAT WITH HER!");
}
    return 0;
}

