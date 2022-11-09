#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n;
    cin>>n;
    bool flag=false;
    while(n--)
    {
        string s;
        cin>>s;
        int b,a;
        cin>>b>>a;
        // if(b<2400)
        //     {
        //         cout<<"NO"<<nl;
        //         continue;
        //     }
        // else if(b>=a)
        //     {
        //         cout<<"NO"<<nl;
        //         continue;
        //     }
        // else 
        //     cout<<"YES"<<nl;
        if(b<a && b>=2400)
            flag=true;

    }
    if(flag)
        cout<<"YES";
    else 
        cout<<"NO";
    

    ekdin_to_ferot_jetei_hobe;
}
