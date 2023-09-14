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
    test(t){
        ll len;
        cin>>len;
        string s;
        cin>>s;
        ll x = 0 ;
        ll y = 0;
        bool token = true;
        f(i,len){
            if(s[i] == 'L'){
                --x;
            }
            else if(s[i] == 'R'){
                ++x;
            }
            else if(s[i] == 'U'){
                ++y;
            }
            else if(s[i] == 'D'){
                --y;
            }
            if(x == 1 && y == 1){
                cout<<"YES"<<nl;
                token = false;
                break;
            }
        }

        if(token){
            cout<<"NO"<<nl;
        }
        

        
    }

    

    re;
}