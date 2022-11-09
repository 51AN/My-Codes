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
        int n,temp;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
            {
            cin>>temp;
            a.push_back(temp);
            }
        sort(a.begin(),a.end());
        int max=a[n-2]-1;
        if(n<3)
            cout<<0<<nl;
        else
            cout<<min(max,n-2)<<nl;
    }

    ekdin_to_ferot_jetei_hobe;
}
