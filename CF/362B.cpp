#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int m,n;
    cin>>m>>n;
    int a[n];
    bool flag=false;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1 || a[i]==m)
            flag=true;
    }

    if(flag)
        {
            cout<<"NO"<<nl;
            return 0;
        }

    sort(a,a+n);
    for(int i=2;i<n;i++)
    {
        if(a[i]-a[i-1]==1 && a[i-1]-a[i-2]==1)
        {
            cout<<"NO"<<nl;
            return 0;
        }
    }
        cout<<"YES"<<nl;

    

    

    ekdin_to_ferot_jetei_hobe;
}
