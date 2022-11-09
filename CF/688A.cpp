#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n,d,ans=0,pas=0,a[101];
    string s;
    cin >> n >> d;
    for (int i = 0; i < d; i++) 
    {
        cin >> s;
        for (int j = 0; j < n; j++) 
        {
            if (s[j] == '0') 
            {
                a[i] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < d; i++) 
    {
        if (a[i] == 1) 
        {
            pas++;
        } else 
        {
            pas = 0;
        }
        ans = max(ans, pas);
    }
    cout << ans;
    

    ekdin_to_ferot_jetei_hobe;
}
