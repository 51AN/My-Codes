#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    ll n;
    cin>>n;
    ll cnt=0;

    for(;;)
    {
        if(n>=1)
        {
            n-=1;
            ++cnt;
        }
        else
        {
            break;
        }

        if(n>=2)
        {
            n-=2;
            ++cnt;
        }
        else
            break;
    }
    cout<<cnt;
    
    ekdin_to_ferot_jetei_hobe;
}
