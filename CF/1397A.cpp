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
        int letter[26]={0};
        int n;
        cin>>n;
        int m=n;
        while(m--)
        {
            string s;
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
                letter[s[i]-'a']++;
            }
        }
        int flag=0;
       
        for(int i=0;i<26;i++)
        {
            if(letter[i]%n!=0)
            {
                flag=1;
                break;
            }
        }
    if(flag)
        cout<<"NO"<<nl;
        else
            cout<<"YES"<<nl;
    }
    

    ekdin_to_ferot_jetei_hobe;
}
