#include<stdio.h>
int main()
{
    int n,temp=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        b[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    int ans=0,x=0;
    for(int i=1;i<=n;i++)
    {
        ans=ans+(x*a[i]+1);
        x++;
    }
    printf("%d\n",ans);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",b[i]);
    }





    return 0;
}
