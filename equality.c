#include<stdio.h>
int main()
{
    long long int q;
    scanf("%lld",&q);
    while(q--)
    {
        long long int a=0,b=0,c=0;
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("%lld\n",(a+b+c)/2);


    }
    return 0;
}
