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
        int n;
        cin>>n;
        vector<ll> a(n + 1);
        f1(i,n) cin>>a[i];

        vector<bool> visited(n + 1, false);
        bool flag = true;

        f1(i,n){
            if(visited[i]) continue;
            
            vector<ll> indices;
            vector<ll> values;

            ll temp = i;

            while(temp <= n && !visited[temp]){
                visited[temp] = true;
                indices.push_back(temp);
                values.push_back(a[temp]);
                temp = 2 * temp;
            }
            sort(values.begin(), values.end());
            sort(indices.begin(), indices.end());

            if(values != indices){
                flag = false;
                break;
            }
            
        }
        if(flag) YES;
        else NO;
    }
    re;
    
}