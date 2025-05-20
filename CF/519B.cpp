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
        sort(a, a + n);
        ll b[n -1];
        f(i,n-1){
            cin>>b[i];
        }
        sort(b, b + n - 1);
        ll c[n - 2];
        f(i,n-2){
            cin>>c[i];
        }
        sort(c, c + n - 2);
        bool firstErrorFound = false;
        bool secondErrorFound = false;
        f(i,n-1){
            if(a[i] != b[i]){
                cout<<a[i]<<nl;
                firstErrorFound = true;
                break;
            }
        }
        if(!firstErrorFound){
            cout<<a[n-1]<<nl;
        }
        f(i,n-2){
            if(b[i] != c[i]){
                cout<<b[i]<<nl;
                secondErrorFound = true;
                break;
            }
        }
        if(!secondErrorFound){
            cout<<b[n-2]<<nl;
        }
    
    re;
    
}