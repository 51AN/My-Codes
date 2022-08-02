#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"


using namespace std;


int main()
{

    ll t;
    cin>>t;

    while(t--)
    {
      ll n;
      cin>>n;
      ll a[n];

      for(int i = 0 ; i<n ; i++)
      {
          cin>>a[i];
           
      }
      ll cnt =0;
      for(int i = 0 ; i<n-1 ; i++)
      {
          
           if(a[i]!=0 && a[i+1]==0)
           {
             ++cnt;
           }
      }
      if(a[n-1]!=0)
        {
            ++cnt;
        }

        cout<<cnt<<nl;
    }

    ekdin_to_ferot_jetei_hobe;
}