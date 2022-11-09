#include<stdio.h>
int main()
{
    int n,p,q,flag=0,i,m=0;
    scanf("%d",&n);
    int merge[n];

    scanf("%d",&p);
    int x[p];

    for(i=1;i<=p;i++)
    {
        scanf("%d",&x[i]);
        m=x[i];
        merge[m]=1;
    }
    scanf("%d",&q);
    int y[q];

    for(i=1;i<=q;i++)
    {
        scanf("%d",&y[i]);
        m=y[i];
        merge[m]=1;
    }

    for(i=1;i<=n;i++)
    {
        if(merge[i]==1)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");




    return 0;
}
