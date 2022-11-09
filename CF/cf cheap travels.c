#include<stdio.h>
int main()
{

    int n,a,b,m,x=0,y=0,p=0,q=0;

    scanf("%d %d %d %d",&n,&m,&a,&b);

    x=n*a;
    if(n>=m)
    {
    p=(n/m)*b;
    int f=(n%m)*a;
    int g=(n%m)*b;
    if(f>=g)
    {
        q=g;
    }
    else
        q=f;
    y=p+q;
    }
    else if(m>n)
    {
        y=b;
    }
    if(x>=y)
    {
        printf("%d",y);
        return 0;
    }
    else
        printf("%d",x);


    return 0;
}
