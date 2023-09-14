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
string s = "codeforces";

int main(){

    fastIO;
    ll n, cnt = 0;
    ll seg=0;
    ll l,r;
    cin>>n;
    ll a[n], s[n];
    
    f(i,n){
        cin>>a[i];
        s[i] = a[i];
    }

    sort(s, s+n);

    f(i,n){
        if(s[i] == a[i])
        cnt++;
    }

    if(cnt == n){
        cout<<"yes\n1 1";
        re;
    }

    for(ll i = 0; i<n-1, seg<1;){
        if(a[i] <a[i+1]){
            i++;
        }else{
            l=i;
            r=i;
            while(a[i]>a[i+1] && i<n-1){
                i++;
                r++;
            }

            sort(a+l,a+r+1);
            seg++;
        }
    }
    f(i,n){
        if(s[i]!=a[i]){
            cout<<"no";
            re;
        }
    }

    cout<<"yes\n"<<l+1<<" "<<r+1;


    re;
}