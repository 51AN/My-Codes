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
    vector<pair<ll,ll>>v;
    ll first,second;
    ll min=9999999999999,max=0;
    for(int i=0;i<n;i++)
    {
        cin>>first>>second;

        v.push_back(pair<int,int>(first,second));

        if(first<min)
            min=first;
        if(second<min)
            min=second;
        if(first>max)
            max=first;
        if(second>max)
            max=second;
    }
    // cout<<min<<" "<<max<<nl;
    for(int i=0;i<n;i++)
    {
        if(v[i].first==min && v[i].second==max)
        {
            cout<<i+1<<nl;
            ekdin_to_ferot_jetei_hobe;
        }

    }
    cout<<-1<<nl;


    ekdin_to_ferot_jetei_hobe;
}
