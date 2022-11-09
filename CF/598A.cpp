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
        ll n,ans,unlimited_power=1;
        cin>>n;
        ans=n*(n+1)/2;
        while(unlimited_power<=n)
        {
            ans-=unlimited_power*2;
            unlimited_power=unlimited_power*2;
        }
    cout<<ans<<"\n";
    }

    ekdin_to_ferot_jetei_hobe;
}

