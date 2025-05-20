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
        ll a, b, c;
        cin >> a >> b >> c;
        ll mid = 0;

        if(a >= b && b>=c){
            mid = b;
        }
        else if(c>=b && b>=a){
            mid = b;
        }
        else if(b >= a && a >= c){
            mid = a;
        }
        else if(c>=a && a>=b){
            mid = a;
        }
        else if(b >= c && c >= a){
            mid = c;
        }
        else if(a>=c && c>=b){
            mid = c;
        }

        ll ans = 0;
        ans = abs(mid - a) + abs(mid - b) + abs(mid - c);
        cout << ans << nl;
    }
    re;
}