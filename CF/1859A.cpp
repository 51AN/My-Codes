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
        cin>>n;
        ll a[n];
        f(i,n)cin>>a[i];
        sort(a, a + n);

        if(a[0] == a[n - 1]){
            cout<<-1<<nl;
        }
        else{
            ll size = 0;
            while(a[size] == a[0])size++;
            cout<< size << " " << n - size << nl;
            for(int i = 0 ; i < size ; i ++){
                cout<<a[i]<<" ";
            }
            cout<<nl;
            for(int i = size ; i < n ; i ++){
                cout<<a[i]<<" ";
            }
            cout<<nl;
        }
    }
    

    re;
}