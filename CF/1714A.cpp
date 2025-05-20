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
        ll n, H, M;
        cin>>n>>H>>M;
        ll timeDifference = 1440;
        while(n--){
            ll h, m;
            cin>>h>>m;

            ll tempTimeDifference = (h - H) * 60 + (m - M);
            if(tempTimeDifference < 0){
                tempTimeDifference += 1440;
            }
            if(tempTimeDifference < timeDifference){
                timeDifference = tempTimeDifference;
            }
            
        }

        cout<<timeDifference / 60<<" "<<timeDifference % 60<<nl;

    }
    
    re;
    
}