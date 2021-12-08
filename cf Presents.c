#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);
    int a[n+1];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
                printf("%d ",j+1);
        }
    }



    return 0;

}












