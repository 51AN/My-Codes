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
        ll a[n];

        for(int i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        ll test =0;
        ll x = 0;
        for(int i=0; i<n ; i++)
        {
            for(int j =0 ; j<n ; j++)
            {
                
                if(j!=i)
                {
                    test ^= a[j];
                }

            }
            if(a[i]==test)
            {
                x=a[i];
                break;
            }
            else
            {
                test = 0;
            }
            
        }

        cout<<x<<nl;
        

        
        
    }

    ekdin_to_ferot_jetei_hobe;
}