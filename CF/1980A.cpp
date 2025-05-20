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
    test(t){
        ll n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char, ll> mp;
        mp['A'] = 0;
        mp['B'] = 0;
        mp['C'] = 0;
        mp['D'] = 0;
        mp['E'] = 0;
        mp['F'] = 0;
        mp['G'] = 0;
        f(i,n){
            mp[s[i]]++;
        }
        ll ans = 0;

        for(auto x: mp){
            if(m > x.second){
                ans += m - x.second;
            }
        }
        cout<<ans<<nl;

    }
    
    re;
    
}