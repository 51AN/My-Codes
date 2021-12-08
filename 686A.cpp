#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    char c;
    ll n, x, d, ans=0;
    cin >> n >> x;
    while(n--)
    {
        cin >> c >> d;
        if (c == '+') 
        {
            x += d;
        } else if (d <= x) 
        {
            x -= d;
        } else 
        {
            ans++;
        }
    }

    cout << x << " " << ans;
    ekdin_to_ferot_jetei_hobe;
}

