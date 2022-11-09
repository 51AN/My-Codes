#include<stdio.h>
int main()
{

    long long int n,i,x;

    scanf("%lld %lld",&n,&x);
    long long int a[x];

    for(i=0;i<x;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int cnt = a[0]-1;// Because Xenia starts from the 1st house.
    for(i=0;i<x-1;i++)// The last digit does not need to be checked as it is already been checked in the previous one.
    {
     if(a[i]<a[i+1])
     {
         cnt += (a[i+1]-a[i]);
     }
     else if(a[i+1]<a[i])
     {
         cnt += (n-(a[i]-a[i+1]));
     }
    }
    printf("%lld",cnt);



    return 0;
}
