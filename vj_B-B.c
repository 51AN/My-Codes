#include<stdio.h>

int main()
{
  
    int t;
    scanf("%d",&t);
    int i=1;

    while(t--)
    {
    double n;
    scanf("%lf",&n);

    n=(n*2)*(n*2) - (3.1459*(n*n));


    printf("Case %d: %.2lf\n",i,n);

    i++;
    }


    return 0;
}