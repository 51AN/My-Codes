#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO                                           (ios::sync_with_stdio(0),cin.tie(0));
#define re                                               return 0;
#define nl                                               "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i >= 0 ; i --)
#define fb1(i,n)                                         for(int i = n  ; i >= 1 ; i --)
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
        ll cnt = 0;
        ll max = 0;
        ll a[k + 1] = {0};
        f1(i,n){
            ll x;
            cin>>x;
            a[x] = 1;

        }

        f1(i,k){
            cnt++;
            if(a[i] == 1){
                if(cnt >= max){
                    max = cnt;
                }
                cnt = 0;
            }
        }

        for(int i = k - 1  ; i >= 1 ; i --){
            cnt++;
            if(a[i] == 1){
                if(cnt > max){
                    max = cnt;
                }
                cnt = 0;
            }
        }
        if(cnt > max){
            max = cnt;
        }
        cout<<max<<endl;
    }

    re;
    
}
