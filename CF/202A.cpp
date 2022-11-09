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
    int f[26]={0};
    char m='a';
    for(int i=0;i<s.size();i++)
    {

        ++f[s[i]-97];
    }
    // int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(m<s[i])
        {
            m=s[i];
        }        
    }
    for(int i=0;i<f[m-97];i++)
    {
        printf("%c",m);
    }


    ekdin_to_ferot_jetei_hobe;
}
