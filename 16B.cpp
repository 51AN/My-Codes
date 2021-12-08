#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    ll n,m,a,b;
    vector<pair<ll,ll>>v;

    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        cin>>a>>b;

        v.push_back(pair<ll,ll>(a,b));
        
    }    
    ll ans=0;
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(v[i].second<v[j].second)
            {
                swap(v[i].first,v[j].first);
                swap(v[i].second,v[j].second);
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        ans+=(v[i].second*(min(n,v[i].first)));
        n-=min(n,v[i].first);
    }

    cout<<ans;


    

    ekdin_to_ferot_jetei_hobe;
}
