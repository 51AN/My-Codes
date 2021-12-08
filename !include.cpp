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
        int cnta=0,cntb=0,cntc=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
                cnta++;
            if(s[i]=='B')
                cntb++;
            if(s[i]=='C')
                cntc++;
            

        }

        if(cnta+cntc==cntb)
            cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    ekdin_to_ferot_jetei_hobe;
}
