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
    int a[n+9];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    
    int cnt=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        cnt=0;
        int check=a[i];
        while(check!=-1)
        {
            check=a[check];
            cnt++;
        }
        ans=max(ans,cnt);
    }
    cout<<ans+1;
    

    ekdin_to_ferot_jetei_hobe;
}
