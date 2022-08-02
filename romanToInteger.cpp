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
    long long int cnt = 0;
    
    unordered_map<char,int>mp;

    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if(mp[s[i+1]] > mp[s[i]])
        {
            cnt += (mp[s[i+1]] - mp[s[i]]);
            i++;
        }
        else
        {
            cnt += mp[s[i]];
        }
    }


    cout<<cnt;

    ekdin_to_ferot_jetei_hobe;
}