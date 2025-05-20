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
    string s;
    cin>>s;
    ll n = s.length();
    bool flag = true;
    bool twoFour = false;
    bool oneFour = false;
    bool one = false;
    ll i = 0;
    while(1){
        if(i>=n){
            break;
        }

        if(s[i] == '1'){
            if(one){
                one = false;
            } else if(oneFour){
                oneFour = false;
            } else if(twoFour){
                twoFour = false;
            }
            one = true;
        }
        else if(s[i] == '4'){
            if(one){
                one = false;
                oneFour = true;
            } else if(oneFour){
                oneFour = false;
                twoFour = true;
            } else if(twoFour){
                twoFour = false;
                flag = false;
            } else{
                flag = false;
                break;
            }
        } else{
            flag = false;
            break;
        }

        ++i;
    }

    if(flag){
        cout<<"YES"<<nl;
    } else{
        cout<<"NO"<<nl;
    }
    re;
    
}
