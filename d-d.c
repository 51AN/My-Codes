#include<stdio.h>
int main()
{
    int n,m,i,j,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
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
    x=0;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
                x=b[i];
                b[i]=b[j];
                b[j]=x;
            }
        }
    }
    printf("%d %d",a[n-1],b[m-1]);

}
