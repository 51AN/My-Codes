#include <bits/stdc++.h>
using namespace std;
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"

ll maxRec(ll a[], ll size)
{
    ll max1 = INT_MIN;
    ll max2 = 0;
 
    for (ll i = 0; i < size; i++)
    {
        max2 = max2 + a[i];
        if (max1 < max2)
            max1 = max2;
 
        if (max2 < 0)
            max2 = 0;
    }
    return max1;
}
 
 
int main()
{
    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<maxRec(a,n)<<nl;
    }

    ekdin_to_ferot_jetei_hobe;
}