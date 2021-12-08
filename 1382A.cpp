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
        int n,m;
        int a[1001],b[1001];
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        vector<int>v;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i] == b[j])
                {
                    v.push_back(a[i]);
                    break;
                }
            }
            if(v.size() == 1)
                break;
    
        }
        if(v.size() == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<1<<" ";
            for(int i=0; i<1; i++)
            {
                cout<<v[i]<<endl;
            }
        }
    }

    ekdin_to_ferot_jetei_hobe;
}
