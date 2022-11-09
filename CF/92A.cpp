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
    bool flag=false;
    while(m)
    {
    for(int i=1;i<=n;i++)
    {
        m-=i;

        if(m<=0)
        {
            if(m<0)
                m+=i;
                
                flag=true;
                break;
        }
           

    }
    if(flag)
        break;
    }

    cout<<m;

    ekdin_to_ferot_jetei_hobe;
}
