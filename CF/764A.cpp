#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n,m,z;
    cin>>n>>m>>z;
    int cnt=0;
    for(int i=1;i<=z;i++)
    {
        if(i%n==0 && i%m==0)
            cnt++;
    }   
    cout<<cnt<<nl;
    

    ekdin_to_ferot_jetei_hobe;
}
