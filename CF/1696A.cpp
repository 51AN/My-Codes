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
      ll n,z;
      cin>>n>>z;

      ll a[n];

      ll max = 0;

      for(int i=0 ;i<n ; i++)
        {
          ll judge = 0;
          cin>>a[i];
          if((a[i]|z) > (a[i]&z))
          {
            judge = (a[i]|z);
          }
          else
          {
            judge = (a[i]&z);
          }


          if(judge > max)
          {
            max = judge;
          }


        }
        cout<<max<<nl;
    }

    ekdin_to_ferot_jetei_hobe;
}