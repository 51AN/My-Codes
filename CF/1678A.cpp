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
        ll f[101] = {0};

        for(int i=0; i<n ; i++)
        {
            cin>>a[i];
            ++f[a[i]];

        }

        bool distinct = true;

        for(int i =0 ; i<101 ; i++)
        {
            if(f[i]>1)
            {
                distinct = false;
                break;
            }
        }

        if(f[0])
        {
            cout<<n-f[0]<<nl;
        }
        else
        {
            if(distinct)
            {
                cout<<n+1<<nl;
            }
            else
            {
                cout<<n<<nl;
            }

        }

    }

    ekdin_to_ferot_jetei_hobe;
}