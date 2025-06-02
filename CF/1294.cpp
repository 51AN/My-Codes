#include <bits/stdc++.h>
#define fb1(i,n)           for(int i = n; i >= 1; i--)
#define v(i)               vector<int>v[i];
#define sortv(a)           sort(a.begin(),a.end())
#define test(t)            ll t; cin >> t; while(t--)
#define YES                cout << "YES" << endl
#define NO                 cout << "NO" << endl
#define fastIO             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define nl                 '\n'
#define re                 return 0
#define ll                 long long

using namespace std;

int main() {
    fastIO;
    test(t) {
        ll n;
        cin>>n;
        ll cnt = 0;
        ll ans[3] = {0, 0, 0};
        for (ll i = 2; i * i < n and cnt<2 ; i++) {
            if (n % i == 0) {
                ans[cnt++] = i;
                n /= i;
            }
        }
        if(cnt<2){
            NO;
        } else{
            YES;
            cout<<ans[0]<<" "<<ans[1]<<" "<<n<<nl;
        }
    }

    re;
}
