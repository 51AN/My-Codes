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
        int ans=0,n,k;
        cin>>n>>k;

        if(n%2==0)
        {
            ans=k*2;
            ans+=n;
            cout<<ans<<nl;
        }
        else
        {
            vector<int>v;
            for(int i=1;i<=sqrt(n);i++)
            {
                int a;
                if(n%i==0)
                {
                    a=n/i;
                    v.push_back(i);
                    
                    if(i!=a)
                        v.push_back(a);
                    
                }
            }
            sort(v.begin(),v.end());
            ans=n+v[1];
            ans+=(2*(k-1));
            cout<<ans<<nl;
            
        }


    }

    ekdin_to_ferot_jetei_hobe;
}
