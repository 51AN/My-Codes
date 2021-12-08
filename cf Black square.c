#include<stdio.h>
int main()
{
    int a[5],sum=0;
    for(int i=1;i<=4;i++)
    scanf("%d",&a[i]);

    char s[100001];
    scanf("%s",&s);
    int l=strlen(s);

    for(int i=0;i<l;i++)
    {
        if(s[i]=='1')
            sum += a[1];
        if(s[i]=='2')
            sum += a[2];
        if(s[i]=='3')
            sum += a[3];
        if(s[i]=='4')
            sum += a[4];

    }
    printf("%d",sum);


    return 0;
}
