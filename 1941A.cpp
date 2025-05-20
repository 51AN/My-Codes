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
        ll n, m, k;
        cin>>n>>m>>k;
        ll cnt = 0;
        ll b[n];
        ll c[m];
        f(i,n){
            cin>>b[i];
        }
        f(i,m){
            cin>>c[i];
        }
        f(i,n){
            f(j,m){
                if((b[i] + c[j] <= k)){
                    cnt++;
                }
            }
        }

        cout<<cnt<<nl;
    }
    re;
}