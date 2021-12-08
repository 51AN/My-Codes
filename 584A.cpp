#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    int n,t;
    cin>>n>>t;

    if(n>=2 && t<10)
    {
        for(int i=0;i<n;i++)
            cout<<t;
    }
    else if(n>=2 && t==10)
    {
        for(int i=0;i<n-1;i++)
        {
            cout<<"9";
        }
        cout<<0;
    }
    else if(n==1 && t<10)
    {
        cout<<t;
    }
    else if(n==1 && t==10)
    {
        cout<<"-1";
    }
    ekdin_to_ferot_jetei_hobe;
}
