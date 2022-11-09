#include<stdio.h>
int main()
{

    int a,b,x=0;

    scanf("%d %d",&a,&b);

    if(a>b)
    {
        x=a;
        a=b;
        b=x;
    }

        printf("%d %d",a,(b-a)/2);


    return 0;
}
