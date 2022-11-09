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
        ll n, hour, min;
        cin>>n>>hour>>min;

        ll h[n],m[n];
        ll ansh[n], ansm[n];
        for(int i =0 ; i<n ; i++)
        {
            cin>>h[i]>>m[i];

            if((h[i]-hour)>=0)
            {
                ansh[i] = (h[i]-hour);
            }
            else 
            {
                ansh[i] = (h[i]-hour) +24;

            }


            if((m[i]-min)>=0)
            {
                ansm[i] = (m[i]-min);

            }
            else
            {
                ansm[i] = (m[i]-min) + 60;
                --ansh[i];
            }


        }

        vector<pair<ll,ll>>v;

        for(int i = 0 ; i<n ; i++)
        {
            v.push_back( make_pair(ansh[i],ansm[i]) );

        }
        sort(v.begin(), v.end());
        cout<<v[0].first<<" "<<v[0].second<<nl;


        
    }

    ekdin_to_ferot_jetei_hobe;
}