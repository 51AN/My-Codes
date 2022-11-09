#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int grain_min=0,grain_max=0,weight_min=0,weight_max=0;
        grain_max=a+b;
        grain_min=a-b;

        weight_max=c+d;
        weight_min=c-d;

        if((n*grain_max >= weight_min) && (n*grain_min<= weight_max))
        {
            cout<<"YES"<<nl;
        }
        else
            cout<<"NO"<<nl;
    }

    ekdin_to_ferot_jetei_hobe;
}
