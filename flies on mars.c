#include<stdio.h>
int main()
{
    int a[4],b[4];

    for(int i=1;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<4;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=1;i<4;i++)
    {
        if(a[i]==b[i])
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}
