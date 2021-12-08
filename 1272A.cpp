#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int q;
    cin>>q;
    while(q--)
    {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max((abs(a-b)+abs(b-c)+abs(a-c))-4,0)<<nl;
    }

    ekdin_to_ferot_jetei_hobe;
}
