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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int open=0,close=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' && s[i+1]==')')
            {
                i++;
                continue;
            }

            if(s[i]=='(')
            {
                open++;
            }
            if(s[i]==')')
            {
                close++;
            }
            if(open<close)
            {
                ans++;
                close--;
            }

        }
        cout<<ans<<nl;
    }
    

    ekdin_to_ferot_jetei_hobe;
}
