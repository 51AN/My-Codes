#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[100];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int odd = 0,even = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2 != a[i] % 2)
            {
                if(a[i] % 2 == 1)
                    odd++;
                else
                    even++;
            }
        }
        if(odd != even)
            cout<<-1<<endl;
        
        else
            cout<<even<<endl;
        
    }


    ekdin_to_ferot_jetei_hobe;
}
