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
        ll x,y;
        cin>>x>>y;
        if(x>=y)
            cout<<"YES"<<nl;
        else
        {
            ll cnt=1000;
            bool flag=false;
            while(cnt--)
            {
                if(x>=y)
                {
                    flag=true;
                    break;
                }
                if(x%2)
                    x-=1;
                else
                    x=(3*x)/2;



            }
            if(flag)
                cout<<"YES"<<nl;
            else
                cout<<"NO"<<nl;
        }
    }   
    

    ekdin_to_ferot_jetei_hobe;
}
