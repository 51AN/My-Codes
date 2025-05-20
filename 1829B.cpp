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
        ll maxBlank = 0;
        cin>>n;
        ll a[n];
        f(i,n){
            cin>>a[i];
        }
        ll currBlank = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 0 ){
                ++currBlank;
                if((i == (n-1))){  
                    maxBlank = __max(currBlank, maxBlank);
                }
            } else{
                maxBlank = __max(currBlank, maxBlank);
                currBlank = 0;
            }
        }
        cout<<maxBlank<<nl;

    }
    re;
}