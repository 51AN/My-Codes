#include<stdio.h>
int main ()
{
    long long int n,m,a;

    long double x,y,i,j;

    long long int sum;

    scanf("%lld %lld %lld",&n,&m,&a);


    x=(long double)n/a;
    i=ceil(x);


    y=(long double)m/a;
    j=ceil(y);

    sum=i*j;





    printf("%lld",sum);



    return 0;
}

