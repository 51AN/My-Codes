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
        ll n;
        cin>>n;

        ll max=-9999999999;

        ll a[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n-1;i++)
        {
            ll sum = a[i];
            for(int j=i+1;j<n;j++)
            {
                sum += a[j];

                if(max<sum)
                {
                    max = sum;
                }
            }
        }
        cout<<max<<nl;
    }
    ekdin_to_ferot_jetei_hobe;
}
