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
    string a;
    cin>>a;
    int cnt=0;
    for(int i=0;i<n-2;i++)
    {
        if(a[i]=='x')
        {
            if(a[i+1]=='x' && a[i+2]=='x')
                ++cnt;
        }
    }
    
    cout<<cnt;
    ekdin_to_ferot_jetei_hobe;
}
