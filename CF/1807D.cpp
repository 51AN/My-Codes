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


int main(){
    fastIO;
    test(t){
        ll n, q;
        cin>>n>>q;
        ll a[n + 1];
        ll total = 0;
        ll hash[n + 1] = {0};
        f1(i, n) {
            cin>>a[i];
            total += a[i];
            hash[i] = hash[i - 1] + a[i];
        }
        while(q--){
            ll l, r, k;
            cin>>l>>r>>k;
            ll sum = 0;
            ll temp = 0;
            if(l == 1) {
                sum = hash[r];
            } else {
                sum = hash[r] - hash[l - 1];
            }
            temp = total - sum + (r - l + 1) * k;
            if(temp % 2){
                YES;
            } else {
                NO;
            }
        }
    }

    re;
    
}
