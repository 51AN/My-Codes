#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO                                           (ios::sync_with_stdio(0),cin.tie(0));
#define r0                                               return 0;
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



int main()
{
    fastIO;
    
    test(t){

        ll n,q;
        cin>>n>>q;

        ll a[n],b[q];

        f(i,n){
            cin>>a[i];
        }
        f(i,q){
            cin>>b[i];
        }

        ll ans[q] = {0};

        f(i,q){
            ll cnt = 0;
            f(j,n){
                if(b[i] >= a[j]){
                    cnt += a[j];
                }
                else{
                    break;
                }
            }
            ans[i] = cnt;
        }

        f(i,q){
            cout<<ans[i]<<" ";
        }
        cout<<nl;

        
    }

    


    r0;
}