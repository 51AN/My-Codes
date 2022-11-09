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
    if(n==1)
    {
        cout<<"YES";
        return 0;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=i;
        if(sum==n)
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    
    

    ekdin_to_ferot_jetei_hobe;
}
