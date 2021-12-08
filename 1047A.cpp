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
    if(n==3)
    {
        cout<<"1 1 1";
    }
    else if((n-2)%3==0)
    {
        cout<<1<<" "<<2<<" "<<n-3;
    }
    else
    {
        cout<<1<<" "<<1<<" "<<n-2;
    }

    ekdin_to_ferot_jetei_hobe;
}
