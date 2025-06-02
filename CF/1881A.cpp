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

bool isSubstring(const std::string& s, const std::string& x) {
    return s.find(x) != std::string::npos;
}

int main(){
    fastIO;
    test(t){
        ll n, m;
        cin>>n>>m;
        string s;
        string x;
        cin>>s;
        cin>>x;
        ll ans = 0;
        while(true){
            if(isSubstring(s, x)) {
            cout<<ans<<nl;
            break;
            } else {
                s = s + s;
                if(s.size() > 100) {
                    cout<<-1<<nl;
                    break;
                }
                ans++;
            }
        }
        
    }

    re;
    
}
