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
        string s;
        cin>>s;

        int s1 = 0 ;
        int s2 = 0 ;

        f(i,3){
            s1 += (int(s[i]) - 48);
        }

        for(int i = 3 ; i < s.size() ; i++){
            s2 += (int(s[i]) - 48);
        }
        
        
        if(s1 == s2){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }

      
    }



    ekdin_to_ferot_jetei_hobe;
}