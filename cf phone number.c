#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    int m=0;
    m=n/11;
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='8')
        cnt++;
    }
    if(cnt>=m)
        printf("%d",m);
        else
        printf("%d",cnt);

    return 0;
}