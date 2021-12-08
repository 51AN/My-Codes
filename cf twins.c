#include<stdio.h>
int main()
{

    int n,i,j,x,cnt=0,sum=0,ans=0;
    int a[101];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (a[i] > a[j])
                {

                    x =  a[i];
                    a[i] = a[j];
                    a[j] = x;

                }

            }

        }
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
    sum=sum/2;
        while(ans<=sum)
        {
            ++cnt;
            ans+=a[n-cnt];
        }
    printf("%d\n",cnt);
    return 0;
}





