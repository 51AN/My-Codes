#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    int sum=0,two,three,five,six;

    cin>>two>>three>>five>>six;

    while(two!=0 && five!=0 && six!=0)
    {
        two--;
        five--;
        six--;
        sum+=256;
    }
    while(two!=0 && three!=0)
    {
        two--;
        three--;
        sum+=32;
    }

    cout<<sum<<nl;
    

    ekdin_to_ferot_jetei_hobe;
}
