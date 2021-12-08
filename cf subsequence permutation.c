#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int j,n,i,x=0,cnt=0;
        scanf("%d",&n);
        char s[n+1],c[n+1];
        scanf("%s",&s);
        strcpy(c,s);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i]>s[j])
                {
                    x=s[i];
                    s[i]=s[j];
                    s[j]=x;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]!=c[i])
                cnt++;
        }
        printf("%d\n",cnt);

    }



    return 0;
}
