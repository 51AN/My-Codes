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
        ll n, a, b;
        cin>>n>>a>>b;
        bool profit = false;
        if((2 * a) > b){
            profit = true;
        }
        if(n%2 == 0){
            if(profit){
                cout<<(n/2) * b<<nl;
            }
            else{
                cout<<n * a<<nl;
            }
        }
        else{
            if(profit){
                cout<<(n/2) * b + a<<nl;
            }
            else{
                cout<<n * a<<nl;
            }
        }

    }
    re;
}