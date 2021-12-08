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
        ll trade=0,x,y,k;

        cin>>x>>y>>k;
        trade=(y*k+k-1+x-2)/(x-1)+k;
        cout<<trade<<nl;
    }

    ekdin_to_ferot_jetei_hobe;
}
