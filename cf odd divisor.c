#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);

     while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int x,i=1;
        int e=0;
        if(n%2!=0)
        {
            printf("YES\n");

        }
        else if(n%2==0)
        {
            while(n!=0)
            {
                n=n/2;
                if(n%2!=0&&n!=1)
                {
                    printf("YES\n");

                    e++;
                    break;
                }
            }
            if(e==0)
            printf("NO\n");
        }

    }
}
