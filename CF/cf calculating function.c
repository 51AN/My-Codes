#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,i,sum=0,x=0;

    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        x=(pow((-1),i));
        sum=sum+(x*i);
    }
    printf("%lld",sum);



    return 0;
}
