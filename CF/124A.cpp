#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    int n,a,b,flag=0;
    cin>>n>>a>>b;

    int m=n-a;
    while(m>b)
    {
        m--;
        flag=1;
    }
    if(flag)
    cout<<m+1;

    else
    cout<<m;
    

    ekdin_to_ferot_jetei_hobe;
}
