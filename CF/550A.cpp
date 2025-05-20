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
    cin >> s;

    ll arrAB[s.size() + 1 ] = {0};
    ll arrBA[s.size() + 1 ] = {0};

    for(int i = 0 ; i < s.size() - 1 ; i ++){
        if(s[i] == 'A' && s[i + 1] == 'B'){
            arrAB[i] = 1;
        }
        if(s[i] == 'B' && s[i + 1] == 'A'){
            arrBA[i] = 1;
        }
    }

    for(int i = 0 ; i < s.size() - 1 ; i ++){
        if(arrAB[i] == 1){
            for(int j = i + 2 ; j < s.size() - 1 ; j ++){
                if(arrBA[j] == 1){
                    YES;
                    re;
                }
            }
        }
    }

    for(int i = 0 ; i < s.size() - 1 ; i ++){
        if(arrBA[i] == 1){
            for(int j = i + 2 ; j < s.size() - 1 ; j ++){
                if(arrAB[j] == 1){
                    YES;
                    re;
                }
            }
        }
    }

    NO;
    return 0;
}