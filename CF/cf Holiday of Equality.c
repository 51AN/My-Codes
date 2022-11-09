#include<stdio.h>
int main()
{
    int n,x=0,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               x=a[i];
               a[i]=a[j];
               a[j]=x;
            }
        }
    }
    int t=0,cnt=0;
    t=a[n-1];
    for(i=0;i<n;i++)
    {
        while(a[i]!=t)
        {
            a[i]++;
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
