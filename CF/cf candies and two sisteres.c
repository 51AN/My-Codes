#include<stdio.h>
int main()
{

    int t,i;



    scanf("%d",&t);
    long long int n[t];

    for(i=0;i<t;i++)
    {
        scanf("%lld",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        if(n[i]==1||n[i]==2||n[i]==0)
            printf("0\n");
        else if(n[i]%2==0)
            printf("%lld\n",(n[i]/2)-1);
        else if(n[i]%2!=0)
            printf("%lld\n",(n[i]/2));


    }


    return 0;
}
