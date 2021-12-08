#include<stdio.h>
int main()
{
     int n,l,i,j,maxx=0,d=0;//edited
    double x,y,z,ans=0;
    scanf("%d %d",&n,&l);//edited
    int a[n];//edited

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//edited
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

    for(i=0;i<n-1;i++)//edited
    {
        if((a[i+1]-a[i])>maxx)
        {
            maxx=(a[i+1]-a[i]);
        }
    }
    x=(double)maxx/2.0;
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
    printf("%.10lf",ans);
    return 0;
}
