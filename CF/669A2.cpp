#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"


using namespace std;


int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    
    ll stones;
    cin>>stones;

    ll cnt = 0;

    cnt = 2 * (stones/3);

    if(stones%3)
        ++cnt;

    cout<<cnt<<nl;

    ekdin_to_ferot_jetei_hobe;
}