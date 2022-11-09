#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
            cnt++;
    }
    if(cnt>((s.size()/2)))
        cout<<s.size();
    else
        cout<<cnt+cnt-1;
    

    ekdin_to_ferot_jetei_hobe;
}
