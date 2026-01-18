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
        string t;
        cin >> t;
        ll cntOne = 0, cntZero = 0;
        f(i, t.length()){
            if(t[i] == '0'){
                cntZero++;
            }
            else{
                cntOne++;
            }
        }
        ll ans = 0;
        f(i, t.length()){
            if(t[i] == '0' && cntOne > 0){
                cntOne--;
            }
            else if(t[i] == '1' && cntZero > 0){
                cntZero--;
            }
            else{
                ans = t.length() - i;
                break;
            }
        } 
        cout << ans << nl;
    }
    

    re;
}