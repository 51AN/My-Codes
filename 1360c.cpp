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
        int a[101];
        int n;
        cin>>n;
        int odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            odd += a[i] & 1;
        }
        if(odd%2==0)
        {
            cout<<"YES"<<nl;
            continue;
        }
        sort(a,a+n);
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            if((a[i]-a[i-1])==1)
            {
                cout<<"YES"<<nl;
                flag=true;
                break;

            }
        }
        if(!flag)
            cout<<"NO"<<nl;
        else
            continue;
    }
    

    ekdin_to_ferot_jetei_hobe;
}
