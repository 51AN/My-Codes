#include<stdio.h>
int main()
{
    long long int n,l,i,j,maxx=0,d=0;
    double x,y,z,ans=0;
    scanf("%lld %lld",&n,&l);
    long long int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                d=a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if((a[i+1]-a[i])>maxx)
        {
            maxx=(a[i+1]-a[i]);
        }
    }
    x=maxx/2.0;
    y=a[0]-0.0;
    z=(double)l-a[n-1];

    if(x>=y&&x>=z)
    {
        ans=x;
    }
    else
    {
        if(y>z)
            ans=y;
        else
            ans=z;
    }
    printf("%.10f",ans);
    return 0;
}
