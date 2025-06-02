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
        string s;
        getline(cin >> ws, s); 
        ll n = s.size();
        string sln = "";
        sln += s[0];
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == ' ') {
                sln += s[i];
            }
        }
        cout << sln << nl;
    }

    re;
}
