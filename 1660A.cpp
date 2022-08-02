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
       
        ll a,b;
        cin>>a>>b;
        
        if((a!=0)&&(b!=0))
        {
            cout<<(a+(b*2)+1)<<nl;
        }
        else
        {
            if((a==0)&&(b!=0))
                cout<<1<<nl;
            else if((a!=0)&&(b==0))
            {
                cout<<(a+1)<<nl;
            }
            else
            {
                cout<<1<<nl;
            }
        }

        

        
        
    }

    ekdin_to_ferot_jetei_hobe;
}