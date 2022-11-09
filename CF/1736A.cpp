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
    
    test(t){

        ll n;
        cin>>n;

        vector<ll>a;
        vector<ll>b;

        ll cnta1 = 0;
        ll cnta0 = 0;
        ll cntb1 = 0;
        ll cntb0 = 0;

        f(i,n){
            ll x;
            cin>>x;

            if(x == 0){
                cnta0++;
            }
            else{
                cnta1++;
            }

            a.push_back(x);
        }

        f(i,n){
            ll x;
            cin>>x;

            if(x == 0){
                cntb0++;
            }
            else{
                cntb1++;
            }

            b.push_back(x);
        }

        // f(i,n){
        //     cout<<a[i]<<" ";
        // }
        // cout<<nl;
        // f(i,n){
        //     cout<<b[i]<<" ";
        // }
        // cout<<nl;
        // cout<<cnta0<<" "<<cnta1<<" "<<cntb0<<" "<<cntb1<<nl;
        


        bool Equal = true;

        f(i,n){
                if(a[i] != b[i]){
                    Equal = false;
                    break;
                }
            }


        if((cnta1 == cntb1) && (cnta0 == cntb0)){

            if(Equal){
                cout<<0<<nl;
            }
            else{
                cout<<1<<nl;
            }



        }
        else{

            ll cnt = 0;


            


            while(cnta1 != cntb1)
            {
                if(cnta1 < cntb1){
                    cnta1 ++;
                    cnta0 --;
                    cnt ++;
                }
                else{
                    cnta1 --;
                    cnta0 ++;
                    cnt ++;
                }
            }


            cout<<cnt+1<<nl;

        }

        

        
    }

    


    ekdin_to_ferot_jetei_hobe;
}