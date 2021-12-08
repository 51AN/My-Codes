#include<stdio.h>
int main()
{

    int n,i,x;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x==1)
        {
            printf("HARD");
            break;
        }
    }
    if(x==0)
    {
        printf("EASY");
    }

        return 0;
}
