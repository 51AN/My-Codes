#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i => 0 ; i --)
#define fb1(i,n)                                         for(int i = n ; i > 0 ; i --)


using namespace std;



int main(){

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;


    ll t;
    cin>>t;
    
    while(t--){
        
        ll n;
        cin>>n;

        queue<char>q;
        
        string s;
        cin>>s;
    
        f(i,n){
            q.push(s[i]);
        }

        int f[26] = {0};

        int cnt = 0;

        while(!q.empty()){
            if(f[int(q.front()) - 65] == 0){
                f[int(q.front()) - 65]++;
                cnt += 2;
                q.pop();
            }
            else{
                cnt++;
                q.pop();
            }
        }

        cout<<cnt<<nl;



      
    }



    ekdin_to_ferot_jetei_hobe;
}