#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"


using namespace std;


int main()
{

    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll f[n+1] = {0};

        for(int i=0 ; i<n ;i++)
        {
            cin>>a[i];
            f[a[i]]++;

        }
        bool found = false;
        for(int i=0 ; i<=n ; i++)
        {
            if(f[i]>=3)
            {
                cout<<i<<nl;
                found = true;
                break;
            }
            

        }
        if(!found)
        {
            cout<<"-1"<<nl;
        }

    }

    ekdin_to_ferot_jetei_hobe;
}