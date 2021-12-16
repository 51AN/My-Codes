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

   

    for(int i=s.size()-1,j=0 ; i>=0 ; i--,j++)
    {
       if(s[j]!=s[i])
        {
            cout<<"NO"<<nl;
            ekdin_to_ferot_jetei_hobe;
        }
    }
    cout<<"YES"<<nl;

    
    ekdin_to_ferot_jetei_hobe;
}
