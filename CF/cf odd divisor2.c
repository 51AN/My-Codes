//this is a trash program. ignore
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t );

    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        if(n%2==0)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
}
