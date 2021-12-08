#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n,m;
    cin>>n>>m;
    int check[m]={0};
    while(n--)
    {
        int a;
        cin>>a;
        for(int i=0;i<a;i++)
        {
            int b;
            cin>>b;
            
             ++check[b-1];
        }
    }
    for(int i=0;i<m;i++)
        {
            if(check[i]==0)
                {
                    cout<<"NO"<<nl;
                    return 0;
                }
        }
    cout<<"YES"<<nl;

    ekdin_to_ferot_jetei_hobe;
}
