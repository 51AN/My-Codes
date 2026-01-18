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
        cin>>n;
        ll a[n];
        bool flag = true;
        f(i,n) {
            cin>>a[i];
        }
        ll minOps = LLONG_MAX;
        for(int i = 0; i<n - 1; i++) {
            ll sub;
            sub = a[i + 1] - a[i];
            if(sub < 0) {
                cout << 0 << nl;
                flag = false;
                break;
            }
            ll diff = (sub/2) + 1;
            minOps =min(minOps, diff);
        }

        if(flag){
            cout<<minOps<<nl;
        }
        
        

    }

    re;
}
