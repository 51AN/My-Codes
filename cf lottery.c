#include<stdio.h>

int main()
{

    int n,cnt=0;

    scanf("%d",&n);
 a:
    if(n>=100)
    {
        n=n-100;

        cnt++;
        goto a;
    }
    else if(n<100&&n>=20)
    {
        n=n-20;
        cnt++;
        goto a;
    }

    else if(n<20&&n>=10)
    {
        n=n-10;
        cnt++;
        goto a;
    }
    else if(n<10&&n>=5)
    {
        n=n-5;
        cnt++;
        goto a;
    }
    else if(n<5&&n>=1)
    {
        n=n-1;
        cnt++;
        goto a;
    }
    printf("%d",cnt);
    return 0;
}
