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
        ll n;
        cin>>n;

        ll x[n],y[n];

        ll xsum = 0, ysum = 0;
        ll sum = 0;

        for(int i = 0 ; i<n ; i++)
        {
            cin>>x[i]>>y[i];
            if(x[i]<0)
            {
                x[i] = (-1)*(x[i]);
            }
            if(y[i]<0)
            {
                y[i] = (-1)*(y[i]);
            }

            xsum += x[i];
            ysum += y[i];
            
        }
        sum = xsum + ysum;
        cout<<2*sum<<nl;





    }

        

    ekdin_to_ferot_jetei_hobe;
}