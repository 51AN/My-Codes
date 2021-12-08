#include<stdio.h>
int main ()
{
    long int n,m,a;

    double x,y;

    long int i,j,sum;

    scanf("%ld %ld %ld",&n,&m,&a);


    x=n/a;
    i=ceil(x);


    y=m/a;
    j=ceil(y);

    sum=i*j;


    printf("%ld",sum);



    return 0;
}
