#include<stdio.h>
int main()
{
    int n,i;
    int a[101];
    long double sum=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    sum=sum/n;
    printf("%Lf",sum);
    return 0;
}
