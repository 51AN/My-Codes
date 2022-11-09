#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=1;b*i<=a;i++)
    {
        a++;
    }
    printf("%d",a);
    return 0;
}
