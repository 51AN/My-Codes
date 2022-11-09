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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<abs(a[0]-a[1])<<" "<<abs(a[0]-a[n-1])<<nl;

    for(int i=1;i<n-1;i++)
    {
        if((abs(a[i]-a[i-1]))>(abs(a[i]-a[i+1])))
        {
            cout<<(abs(a[i]-a[i+1]))<<" ";
        }
        else
        {
            cout<<abs(a[i]-a[i-1])<<" ";
        }
        
        if((abs(a[i]-a[0]))>(abs(a[i]-a[n-1])))
        {
            cout<<(abs(a[i]-a[0]))<<nl;
        }
        else
        {
            cout<<(abs(a[i]-a[n-1]))<<nl;
        }
    }
    
    cout<<abs(a[n-1]-a[n-2])<<" "<<abs(a[0]-a[n-1]);

    ekdin_to_ferot_jetei_hobe;
}
