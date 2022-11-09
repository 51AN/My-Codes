#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int n,k;
    cin>>n>>k;
    vector<int>v;
    int temp;
    for(int i=0;i<n;i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
    int cnt=0;
    while(v.size())
    {
        
        if(v[0]<=k && v[v.size()-1]<=k)
        {
            v.pop_back();
            cnt++;
        }
        else if(v[0]<=k)
        {
            v.erase(v.begin());
            cnt++;
        }
        else if(v[v.size()-1]<=k)
        {   
            v.pop_back();
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt;
    

    ekdin_to_ferot_jetei_hobe;
}
