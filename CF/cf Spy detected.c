#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int n,i,x=0,f[101]={0};
        scanf("%d",&n);
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
            x=a[i];
            f[x]=f[x]+1;
        }
        for(i=1;i<=100;i++)
        {
            if(f[i]==1)
            {
                x=i;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==x)
            {
                printf("%d\n",i);

            }
        }


    }
}
