#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int n,k,take_it_in;
    int index[101]={0};
    cin>>n>>k;
    int i;
    vector<pair<int,int>>a;
    for(i=1;i<=n;i++)
    {
        cin>>take_it_in;
        a.push_back(make_pair(take_it_in,i));
    }
    sort(a.begin(),a.end());
    
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i].first;
        index[i]=a[i].second;
        if(sum>=k)
        {
            if(sum>k)
            {
                if(i==0)
                {
                cout<<0;
                ekdin_to_ferot_jetei_hobe;
                }
                cout<<i<<nl;
                for(int j=0;j<i;j++)
                {
                    cout<<index[j]<<" ";
                }
                ekdin_to_ferot_jetei_hobe;
            }

            else 
            {
                cout<<i+1<<nl;
                for(int j=0;j<=i;j++)
                {
                    cout<<index[j]<<" ";
                }
                ekdin_to_ferot_jetei_hobe;
            }
        }
    }
    cout<<n<<nl;
    for(i=0;i<n;i++)
    {
        cout<<index[i]<<" ";
    }

    ekdin_to_ferot_jetei_hobe;
}
