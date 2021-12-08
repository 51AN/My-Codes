#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,m;
        scanf("%d %d",&h,&m);
        int sum=0;
        sum= (h*60) + m;
        sum=1440-sum;
        printf("%d\n",sum);
    }
    

    return 0;
}