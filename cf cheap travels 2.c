#include<stdio.h>
int main()
{
    int x=0,n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);

    if(m*a>b)
    {
        x=(n%m)*a;
        if(x>b)
        {
            printf("%d",(n/m)*b+b);
        }
        else
        {
            printf("%d",(n/m)*b+x);
        }
    }
    else
    {
        printf("%d",n*a);
    }



    return 0;
}
