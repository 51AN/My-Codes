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
    string s;
    cin>>s;
    ll left=0 ,right=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
            ++left;
        if(s[i]=='R')
            ++right;
    }
    cout<<(right+left+1);
    

    ekdin_to_ferot_jetei_hobe;
}
