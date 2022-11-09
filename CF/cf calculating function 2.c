#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,ans,x;
    scanf("%lld",&n);
    if(n%2==0){
        ans=n/2;
    }
    if(n%2==1){
        x=pow(-1,n);
        ans=x*((n+1)/2);//or you can just put this as the formula of odd ans=(n-1)/2-n;
    }
    printf("%lld\n",ans);
    return 0;
}
