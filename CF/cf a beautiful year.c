#include<stdio.h>

int main()
{
    int n,i;
    int a,b,c,d;
    scanf("%d",&n);
    i=n+1;

while(i<=9012)
    {
        n++;
        a=n%10;
        b= (n/10)%10;
        c= (n/100)%10;
        d= (n/1000)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        }
        i++;

    }
    printf("%d",n);
    return 0;
    }
