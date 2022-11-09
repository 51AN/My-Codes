#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int t,ans=0;
    string s,a[1001];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s[0]=='O'&&s[1]=='O'&&ans==0)
        {
            s[0]='+';
            s[1]='+';
            ans=1;
        }
        else if(s[3]=='O'&&s[4]=='O'&&ans==0)
        {
            s[3]='+';
            s[4]='+';
            ans=1;
        }
        a[i]=s;
        
    }
    if(ans)
    {
        cout<<"YES"<<nl;
        for(int i=0;i<t;i++)
        {
            cout<<a[i]<<nl;
        }
    }
    else
        cout<<"NO"<<nl;
    ekdin_to_ferot_jetei_hobe;
}
