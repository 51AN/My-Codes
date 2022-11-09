#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;

        if (n <= 6) {
            cout << 15 << nl;
            continue;
        }
        if (n <= 8) {
            cout << 20 << nl;
            continue;
        }
        if (n <= 10) {
            cout << 25 << nl;
            continue;
        }

        ll cnt = (n / 10);
        ll rem = n % 10;

        ll time = cnt * 25; // add large pizzas

        if (rem != 0)
            time -= 25;

        if (rem >= 1 && rem <= 2) {
            time += 15 + 15; // add 2 small pizzas
        }
        else if (rem >= 3 && rem <= 4) {
            time += 15 + 20; // add 1 small and 1 medium pizza
        }
        else if (rem >= 5 && rem <= 6) {
            time += 20 + 20; // add 2 medium pizzas
        }
        else if (rem >= 7 && rem <= 8) {
            time += 20 + 25; // add 1 medium and 1 large pizza
        }
        else if (rem == 9) {
            time += 25 + 25; // add 2 large pizzas
        }

        cout << time <<nl;
    }

    ekdin_to_ferot_jetei_hobe;
}




