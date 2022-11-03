#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO  (ios::sync_with_stdio(0),cin.tie(0));
#define re                        return 0;
#define nl                                                "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i => 0 ; i --)
#define v(i)                                             vector<int>v[i];
#define sortv(a)                                         sort(a.begin(),a.end())
#define test(t)                                          ll t; cin>>t; while(t--)
#define YES                                              cout<<"YES"<<endl
#define NO                                               cout<<"NO"<<endl


using namespace std;



int main(){

    fastIO;

    ll n,m;
    cin>>n>>m;

    ll a[n],b[m];
    ll max = 0;

    f(i,n){
        cin>>a[i];
        if(max<a[i]){
            max = a[i];
        }
    }
    f(i,m){
        cin>>b[i];
        if(max<a[i]){
            max = a[i];
        }
    }



    ll f[max + 1] = {0};

    f(i,n){
        ++f[a[i]];
    }
    f(i,m){
        ++f[b[i]];
    }
    ll count = 0;
    f(i,max + 1){
        if(f[i] != 0){
            count++;
        }
    }

    cout<<count<<nl;

    // f(i,max + 1){
    //     cout<<f[i]<<" ";
    // }

    re;

}