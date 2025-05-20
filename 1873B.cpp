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
        ll n, k;
        ll mini = INT16_MAX;
        cin>>n;
        ll a[n];
        f(i,n){
            cin>>a[i];
            if(a[i] < mini){
                mini = a[i];
                k = i;
            }
        }
        
        ll product = 1;

        f(i,n){
            if(i != k){
                product *= a[i];
            } else{
                a[i] += 1;
                product *= a[i];
            }
        }
        cout<<product<<nl;

    }
    re;
}