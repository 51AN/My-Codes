#include<stdio.h>
int main()
{
    freopen("tabs.in","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i,ans=0;
        scanf("%d %d",&n,&k);

        if(k==1||k==n)
            ans=1;
        else
            ans=2;

        if(k==1&&n==1)
            ans=0;

        printf("%d\n",ans);

    }
    fclose(stdin);
    return 0;
}
