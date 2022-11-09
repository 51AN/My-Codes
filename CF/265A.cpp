#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    string s,t;
    cin>>s>>t;
    int j=0;
    for(int i=0;i<t.size();i++)
    {
        if(s[j]==t[i])
        {
            ++j;
        }
    }
    cout<<j+1<<nl;

    ekdin_to_ferot_jetei_hobe;
}
