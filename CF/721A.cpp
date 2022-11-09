#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int n,cnt=0,ans=0,a[101];
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) 
    {
        if (s[i] == 'B') 
        {
            cnt++;
            a[ans] = cnt;
            if (i == n - 1) 
            {
                ans++;
            }
        } else if (cnt != 0) 
        {
            cnt = 0;
            ans++;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < ans; i++) 
    {
        cout << a[i] << " ";
    }

    ekdin_to_ferot_jetei_hobe;
}
