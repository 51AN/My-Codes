#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"


using namespace std;


int main()
{
    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    ll t;
    cin>>t;

    while(t--)
    {
       
       string s;
       char c;
       bool valid = false;

       cin>>s;
       cin>>c;
       for(int i =0 ; i<s.length(); i++)
       {
           if( s[i] == c )
           {
               if( i%2 == 0 )
               {
                   valid = true;
                   break;
               }
               
           }
       }
       if(valid)
       {
           cout<<"YES"<<nl;
       }
       else
       {
           cout<<"NO"<<nl;
       }
        

        
        
    }

    ekdin_to_ferot_jetei_hobe;
}