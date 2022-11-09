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
    while(t--){
    ll n;
    cin>>n;
    ll a[101];
    ll cur=1,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=cur)
        {
            ++cur;
            continue;
        }
        cnt+=a[i] - cur;
        cur= a[i] + 1;
    }

    cout<<cnt<<nl;
    }

    


    

    ekdin_to_ferot_jetei_hobe;
}
