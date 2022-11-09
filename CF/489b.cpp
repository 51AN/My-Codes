#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
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
    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    
    
    ll n;
    cin>>n;
    deque<ll>boys;
    f(i,n){
        ll x;
        cin>>x;
        boys.push_back(x);
    }

    ll m;
    cin>>m;
    deque<ll>girls;
    f(i,m){
        ll x;
        cin>>x;
        girls.push_back(x);
    }


    sortv(boys);
    sortv(girls);
    ll count = 0;
    
    while(!boys.empty() && !girls.empty()){
        
        ll diff = abs(boys[0]-girls[0]);

        if(diff <= 1){
            boys.pop_front();
            girls.pop_front();
            ++count;
        }
        else{
            if(boys[0] > girls[0]){
                girls.pop_front();
            }
            else{
                boys.pop_front();
            }
        }
    }

    cout<<count<<nl;



    

    


    ekdin_to_ferot_jetei_hobe;
}