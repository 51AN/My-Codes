#include<stdio.h>
int main()
{
    long long n,a[2],i,x;
    scanf("%lld",&n);
    x=n;
    if(n>=10){
        printf("%lld\n",n);
    }
    else{
       for(i=0;i<2;i++){
        a[i]=x%10;
        x/=10;
    }
    if(a[0]<=a[1]){
        n=n/10;
    }
    else if(a[0]>a[1]){
        n/=100;
        n*=10;
        n+=a[0];
    }
    printf("%lld\n",n);
    }
    return 0;
}
