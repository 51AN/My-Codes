#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    ll t;
    cin>>t;
    while(t--)
    {
    ll n,k;
    cin>>n>>k;

    ll i=1,m=2*k;

    while(i<m)
    {
        ll mid = (i+m)/2;
        if((mid-(mid/n))>=k)
            m=mid;
        else
            {
                i=mid;
                ++i;
            }
    }
    cout<<i<<nl;
    }
    ekdin_to_ferot_jetei_hobe;
}
