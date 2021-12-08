#include<stdio.h>
int main()
{

    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        if(n%10==9)
        {
            printf("%d\n",(n/10)+1);

        }
        else
        {
            n=n/10;
            printf("%lld\n",n);

        }
    }

    return 0;
}
