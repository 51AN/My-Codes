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
    string s;
    cin>>s;
    int cnt = 0;
    int dp[100005];
    dp[0] = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
        dp[i] = cnt;
    }
    test(t){
        int l, r;
        cin>>l>>r;
        cout<<(dp[r-1] - dp[l-1])<<nl;

    }
    re;
}