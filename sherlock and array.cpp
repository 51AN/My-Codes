#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;

int main()
{
    fastread();
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int left=0,right=0;
        for(i=1;i<n;i++)
        {
            right+=a[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(left==right)
            {
                printf("YES\n");
                break;
            }
            left+= a[i];
            right-= a[i+1];
        }
        if(i==n-1 && n!=1)
            printf("NO\n");
        if(n==1)
            printf("YES\n");
    }
    ekdin_to_ferot_jetei_hobe;

}
