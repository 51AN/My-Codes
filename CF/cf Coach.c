#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,k,j,x=0;

    scanf("%d",&n);
    int a[n],b[n];
    for(k=0;k<n;k++)
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
    for(i=0;i<n;i++)
    {
        for(j=0&&j!=i;j<n;j++)
        {
            k=0;
            b[k]=abs(a[i]-a[j]);
            k++;

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
               x=b[i];
               b[i]=b[j];
               b[j]=x;
            }
        }
    }
    printf("%d\n",b[0]);


    return 0;
}
