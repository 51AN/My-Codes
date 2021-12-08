#include<stdio.h>

int main(void)
{

    int i,j,cnt=0,x;
    scanf("%d",&x);

    int a[x],b[x];

    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }

    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            if(a[i]==b[j])
            cnt++;
        }
    }
    printf("%d",cnt);




    return 0;
}
