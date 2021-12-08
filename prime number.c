#include<stdio.h>
int main()
{

    long long int i,x;
    scanf("%lld",&x);

    if(x==2)
    {
        printf("YES\n");
    }
    else
    {

    for(i=2;i<x;i++)
    {
        if(x%i==0)
          {

            printf("NO\n");
            break;
          }

     else {

            printf("YES\n");
            break;
          }
    }
    }

    return 0;
}
