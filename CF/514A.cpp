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


int main(){

    fastIO;
    string s;
    cin>>s;
    int n = s.size();
    int i = 0;
    if(s[0] == '9'){
            ++i;
        }
    for(;i<n;i++){
        
        if(s[i] > '4'){
            s[i] = ('9' - s[i]) + '0';
        }
        
    }

    cout<<s<<nl;


    re;
}