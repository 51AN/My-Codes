#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll mina=99999999999,minb=99999999999;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mina=min(mina,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            minb=min(minb,b[i]);
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=max(a[i]-mina,b[i]-minb);
        }
        cout<<ans<<"\n";
    }


    ekdin_to_ferot_jetei_hobe;
}

