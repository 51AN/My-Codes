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
        string s;
        cin>>s;
        ll ans = 1, cntL = 0, cntG = 0;
        bool flagG = false, flagL = false;
        f(i,n){
            if(s[i] == '<'){
                if(!flagG){
                    if(cntG == 0){
                        cntL++;
                        ans++;
                    } else{
                        cntG--;
                    }
                }
                
                flagL = true;
                flagG = false;
            } else{
                if(!flagL){
                    if(cntL == 0){
                        cntG++;
                        ans++;
                    } else{
                        cntL--;
                    }
                }
                
                flagG = true;
                flagL = false;
            }
        }
        cout<< ans <<nl;
    }


    re;
}