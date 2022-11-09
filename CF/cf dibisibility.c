#include<stdio.h>

int main()
{

    int n,i,cnt=0,x=0;
    long long int a[10001],b[10001];

    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&a[i],&b[i]);

    }
    for(i=0;i<n;i++)
    {
        if(a[i]%b[i]!=0)
        {
             x=a[i];
            while(x%b[i]!=0)
            {

                x=x+1;
                cnt++;

            }
            printf("%d\n",cnt);
            cnt=0;
        }
        else
            printf("0");
    }




    return 0;
}

