#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<(n-1);i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<(n-1);)
    {
        i=i+a[i];
        if(i==(t-1))
        {
          printf("YES\n");
          return 0;
        }
    }
    printf("NO\n");


    return 0;
}
