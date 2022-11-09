#include<stdio.h>
int main()
{
    int n,temp=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    int x=0;
    x=(a[n-1]-a[0]+1)-n;
    printf("%d",x);

    return 0;
}