#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO                                           (ios::sync_with_stdio(0),cin.tie(0));
#define re                                               return 0;
#define nl                                               "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i >= 0 ; i --)
#define v(i)                                             vector<int>v[i];
#define sortv(a)                                         sort(a.begin(),a.end())
#define test(t)                                          ll t; cin>>t; while(t--)
#define YES                                              cout<<"YES"<<endl
#define NO                                               cout<<"NO"<<endl

using namespace std;    

int main(){
    fastIO;
    ll n, m;
    cin >> n >> m;
    ll a[n];
    map <ll, ll> mp;
    f(i, n){
        cin >> a[i];
    }

    vector<ll> suffix(n);
    unordered_map<ll, bool> visited;

    ll unique = 0;

    for(int i = n - 1; i >= 0; i--){
        if(visited[a[i]] == false){
            unique++;
            visited[a[i]] = true;
        }
        suffix[i] = unique;
    }


    while(m--){
        ll x;
        cin >> x;
        cout << suffix[x - 1] << nl;
    }
    

    re;
}