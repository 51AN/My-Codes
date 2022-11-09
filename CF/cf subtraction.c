#include<stdio.h>
int main()
{
    int k,i;
    long long int n;
    scanf("%lld %d",&n,&k);
    for(i=1;i<=k;i++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else if(n%10!=0)
        {
            n=n-1;
        }
    }
    printf("%lld",n);



    return 0;
}
