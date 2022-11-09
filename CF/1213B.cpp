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
        int n,cnt=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mini=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>mini)
                cnt++;
            mini=min(a[i],mini);

        }
        printf("%d\n",cnt);



    }

    
    

    ekdin_to_ferot_jetei_hobe;
}
