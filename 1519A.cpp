#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int t;
    cin>>t;
    while(t--)
    {
        ll r,b,d;
        cin>>r>>b>>d;
        ll maxi=max(r,b);
        ll mini=min(r,b);
        for(;mini>0;mini--)
            maxi-=d+1;
        if(maxi<=0)
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    

    ekdin_to_ferot_jetei_hobe;
}
