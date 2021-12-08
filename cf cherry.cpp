#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long int  t;
    cin>>t;
    while(t--)
    {
        long long int  n;
        cin>>n;
        long long int  a[n];
        for(long long int  i=0;i<n;i++)
            cin>>a[i];
        long long int  x=0;
        for(long long int  i=0;i<n;i++)
        {
            for(long long int  j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
            }
        }
        if(n==2)
        printf("%d\n",a[0]*a[1]);
        else
        {
            for(long long int  i=n-1;i>=0;i--)
            {
                if(a[i]!=a[i-1]){
                printf("%d\n",a[i]*a[i-1]);
                break;
                }

            }
        }

    }



    return 0;
}
