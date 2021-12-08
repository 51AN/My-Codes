#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    if(n==m)
    {
        if(n%2==0)
            printf("Malvika");
        else
            printf("Akshat");
    }
    else if(n>m)
    {
        if(m%2==0)
            printf("Malvika");
        else
            printf("Akshat");
    }
    else if(m>n)
    {
        if(n%2==0)
            printf("Malvika");
        else
            printf("Akshat");
    }




    return 0;
}
