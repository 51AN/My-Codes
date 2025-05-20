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
        map<ll,ll>mp; //create map to store the frequency of the difference of the element and its index
        ll ans(0);
        ll n;
        cin>>n;
        f(i,n){
            ll x;
            cin>>x;
            ll difference = x - i; //calculate the difference of the element and its index
            if(mp.count(difference)){
                ans += mp[difference]; // we need to satisfy the condition that a[i] - i = a[j] - j. So the map will store the frequency of the difference of the element and its index. If the difference is already present in the map, then we can add the frequency of that difference to the answer.
            }
            mp[difference]++; //increment the frequency of the difference of the element and its index
        }
        cout<<ans<<nl;
    }
    re;
}