#include<stdio.h>
int main()
{
        freopen("tabs.in","r",stdin);

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,x=0;
        scanf("%d %d",&n,&k);

        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
            }
        }
        for(int i=0;i<k;i++)
        {
            a[i]=-a[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        printf("%d\n",sum);

    }

    fclose(stdin);

    return 0;
}
