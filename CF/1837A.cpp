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
        ll x, k;
        cin >> x >> k;
        ll ans = 0;
        vector<ll> v;
        if(x%k != 0){
            ans = 1;
            v.push_back(x);
        } else{
            ans = 2;
            ll first = x - (k + 1);
            ll second = x - first;
            v.push_back(first);
            v.push_back(second);
            
        }

        cout<< ans << nl;
        for(auto i : v) {
            cout << i << " ";
        }
        cout << nl;
        

    }

    re;
}
