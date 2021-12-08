#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>=n)
            cout<<sum-n<<"\n";
        else
            cout<<1<<"\n";

    }

    ekdin_to_ferot_jetei_hobe;
}
