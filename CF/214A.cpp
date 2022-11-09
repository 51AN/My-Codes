#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n,m,ans=0;
    cin>>n>>m;
    for(int a=0;a*a<=n && a<=m;a++)
    {
        int b=n-a*a;
        if(a+b*b==m)
            ans++;

    }
    cout<<ans<<nl;

    

    ekdin_to_ferot_jetei_hobe;
}
