#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO  (ios::sync_with_stdio(0),cin.tie(0));
#define re                        return 0;
#define nl                                                "\n"
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
        char c;
        bool isPresent = false;
        cin>>c;
        f(i,10){
            if(c==s[i]){
                cout<<"YES\n";
                isPresent = true;
                break;
            }
        }
        if(!isPresent){
            cout<<"NO\n";
        }
    }
    re;
}