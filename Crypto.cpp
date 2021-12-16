#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    ll n;
    cin>>n;
    double a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double x,y;
    cin>>x>>y;
    sort(a,a+n,greater<ll>());

    if(x<y)
    {
        cout<<ceil(a[0]/y)+1;
    }
    else
    {
        cout<<ceil(a[0]/y);
    }
    ekdin_to_ferot_jetei_hobe;
}
