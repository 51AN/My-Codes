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
        ll x;
        cin>>x;
        bool flip = true;
        f(i,x){
            vector<string> segment;
            f(j,x){
                if(flip){
                    segment.push_back("##");
                    if(j != x - 1){
                        flip = false;
                    }
                    
                } else{
                    segment.push_back("..");
                    if(j != x - 1){
                        flip = true;
                    }
                }
            }
            for (const string& s : segment) {
                cout << s;
            }
            cout<<nl;
            for (const string& s : segment) {
                cout << s;
            }
            cout<<nl;
            if(x % 2 != 0){
                flip = !flip;
            }
        }

    }
    
    re;
    
}