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
    ll n;
    cin>>n;
    ll a[n + 1];
    f1(i,n){
        cin>>a[i];
    }
    ll prefixSum[n + 1];
    prefixSum[0] = 0;
    f1(i,n){
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }
    sort(a + 1, a + n + 1);
    ll prefixSumSorted[n + 1];
    prefixSumSorted[0] = 0;
    f1(i,n){
        prefixSumSorted[i] = prefixSumSorted[i - 1] + a[i];
    }
    test(t){
        ll type, l, r;
        cin>>type>>l>>r;
        if(type == 1){
            cout<<prefixSum[r] - prefixSum[l - 1]<<nl;
        } else {
            cout<<prefixSumSorted[r] - prefixSumSorted[l - 1]<<nl;
        }

    }
    
    re;
    
}