#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='4' && s[i]!='7')
        {
            cout<<"NO";
            return 0;
        }
    }
    int f7=0,s7=0,f4=0,s4=0;
    for(int i=0;i<(n/2);i++)
    {
        
        if(s[i]=='4')
            ++f4;
        else if(s[i]=='7')
            ++f7;

    }
     for(int i=n/2;i<(n);i++)
    {
       
        if(s[i]=='4')
            ++s4;
        else if(s[i]=='7')
            ++s7;
    }
    if((f7==s7)&&(f4==s4))
        cout<<"YES";

    else
        cout<<"NO";
   
        
    

    ekdin_to_ferot_jetei_hobe;
}
