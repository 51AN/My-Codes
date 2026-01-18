#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO                                           (ios::sync_with_stdio(0),cin.tie(0));
#define re                                               return 0;
#define nl                                               "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i >= 0 ; i --)
#define fb1(i,n)                                         for(int i = n  ; i >= 1 ; i --)
#define v(i)                                             vector<int>v[i];
#define sortv(a)                                         sort(a.begin(),a.end())
#define test(t)                                          ll t; cin>>t; while(t--)
#define YES                                              cout<<"YES"<<endl
#define NO                                               cout<<"NO"<<endl

using namespace std;

int main() {
    fastIO;
    test(t) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        bool found = false;
        for (int i = 0; i < n - 2; i++) {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                found = true;
                break;
            }
        }
        if (found) {
            cout <<2<< nl;
        } else {
            ll cnt = 0;
            f(i,n){
                if(s[i] == '.'){
                    cnt++;
                }
            }
            cout << cnt << nl;
        }
        

    }

    re;
}
