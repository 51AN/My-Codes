#include<stdio.h>
int main()
{

    int n,k,i,j=0,sum=0;

    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*5;
        j=240-k;
        if(sum>j)
        {
            printf("%d",(i-1));
            return 0;
        }
        else if(sum==j)
        {
            printf("%d",i);
            return 0;
        }


    }
        printf("%d",n);
    return 0;
}
