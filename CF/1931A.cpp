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
        ll n;
        cin>>n;
        ll a = ((n>52)?(n-52):1);
        n -= a;
        char x = 'a' + a - 1;
        ll b = ((n>26)?(n-26):1);
        n -= b;
        char y = 'a' + b - 1;
        ll c = ((n>0)?(n):1);
        char z = 'a' + c - 1;
        cout<<x<<y<<z<<nl;
    }
    
    re;
    
}
