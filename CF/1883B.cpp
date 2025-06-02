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
        cin>>n>>k;
        string s;
        cin>>s;
        ll a[26] = {0};
        f(i, n){
            a[s[i] - 'a']++; // count the frequency of each alphabet
        }
        ll ans = 0;
        f(i, 26){
            ans += a[i] % 2; // keep track of all the odd number of alphabets
        }

        if(ans <= k+1){
            YES; // Yes if ood number of alphabets is less than or equal to k+1
        } else{
            NO;
        }
    }

    re;
    
}
