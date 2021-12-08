#include<stdio.h>

int main()
{

    int i,j,k,x,n;
    long long int a[100000];

    scanf("%d %d",&n,&x);

    for(i=1;i<=n;i=i+2)
    {
        for(j=1;j<=(i+1)/2;j++)
        {
         a[j]=i;
        }

    }
    for(i=2;i<=n;i=i+2)
    {
        while(k<=j+(i/2))
        {
           a[k]=i;
           k++;
        }
    }

    printf("%lld",a[x]);


    return 0;
}
