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

        if(n>=1900)
        {
            cout<<"Division 1"<<nl;
        }
        else if(n>=1600 && n<=1899)
        {
            cout<<"Division 2"<<nl;
        }
        else if(n>=1400 && n<=1599)
        {
            cout<<"Division 3"<<nl;
        }
        else
        {
            cout<<"Division 4"<<nl;
        }

    }

    ekdin_to_ferot_jetei_hobe;
}