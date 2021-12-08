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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        int cnt=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                cnt++;
            }
            else
                break;
        }
        cout<<n-cnt<<nl;

    }

    ekdin_to_ferot_jetei_hobe;
}
