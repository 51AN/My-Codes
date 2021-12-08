#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    int n,one=0,zero=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='n')
            one++;
        if(s[i]=='z')
            zero++;
        

    }
        while(one--)
        {
            cout<<1<<" ";
        }
        while(zero--)
        {
            cout<<0<<" ";
        }

    ekdin_to_ferot_jetei_hobe;
}
