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
    ll a[n];
    f(i,n){
        cin>>a[i];
    }
    sort(a,a+n);
    ll diff = a[n-1] - a[0];
    ll min_count = 0, max_count = 0;
    // run a loop which will count how many times can I get the diff from the sorted array
    f(i,n){
        if(a[i] == a[0]) min_count++;     
        if(a[i] == a[n-1]) max_count++;    
    }
    ll count = 0;
    // If all elements are the same, count all possible pairs of elements
    if(diff == 0) {
        count = (n * (n-1)) / 2;  // nC2 = n * (n-1) / 2 for pairs of identical elements
    } else {
        count = min_count * max_count; 
    }
    
    cout<<diff<<" "<<count<<nl;

    re;
}