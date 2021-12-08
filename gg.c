#include<stdio.h>
int main()
{
    long long int n,x,i,sum=0;
    scanf("%lld %lld",&n,&x);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    if((x-(n-1))>=sum&&(x-(n-1)-2)<=sum)
    {
        printf("YES\n");
        return 0;
    }
    else
        printf("NO\n");



    return 0;
}
