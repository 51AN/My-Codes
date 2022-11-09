#include<stdio.h>

int main()
{

    int n,i,h,a[1001],sum=0;

    scanf("%d%d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]<=h)
    {
        sum++;
    }
    else if(a[i]>h)
    {
        sum=sum+2;
    }
    }
    printf("%d",sum);
    return 0;
}
