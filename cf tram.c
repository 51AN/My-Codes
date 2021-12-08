#include<stdio.h>

int main()
{

    int n,c,b,i,a[10000],x=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&c,&b);
        x=x-c+b;

        a[i]=x;
    }

    for (i=1;i<=n;i++)
    {
       if (a[0] < a[i])
       {
           a[0] = a[i];
       }
  }

    printf("%d",a[0]);
    return 0;

}
