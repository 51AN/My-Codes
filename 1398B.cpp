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
        string s;
        cin>>s;
        vector<int>v;
        int one=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                while(s[i]=='1')
                {
                    ++one;
                    ++i;
                }
                v.push_back(one);
                one=0;
            }
        }
    sort(v.begin(),v.end(),greater<int>());
    int ans=0;
    for(int i=0;i<v.size();i+=2)
    {
        ans+=v[i];
    }
    cout<<ans<<nl;
    }
    
    

    ekdin_to_ferot_jetei_hobe;
}
