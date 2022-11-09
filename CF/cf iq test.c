#include<stdio.h>
int main()
{

    int n,i,j=0,k=0;
    int a[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            j++;

        }
        else if(a[i]%2!=0)
        {
            k++;

        }
    }
    if(j==1)
    {
        for(i=0;i<n;i++)
        {
        if(a[i]%2==0)
        {
            printf("%d",i+1);
        }

        }
    }
    else if(k==1)
    {
        for(i=0;i<n;i++)
        {
        if(a[i]%2!=0)
        {
            printf("%d",i+1);
        }

        }
    }




    return 0;
}
