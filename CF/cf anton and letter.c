
#include<stdio.h>
int main()
{

    int f[26]={0};
    int cnt,i,x;
    char c[1001];
    scanf("%[^\n]",&c);

    int l=strlen(c);


    for(i=0;i<l;i++)
    {

        if(c[i]>='a'&&c[i]<='z')
        {
        x=c[i]-97;
        f[x]=f[x]+1;
        }

    }
    for(i=0;i<26;i++)
        {
            if(f[i]!=0)
            {
            cnt++;
            }
        }

        printf("%d",cnt);

        return 0;
}
