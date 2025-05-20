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
        ll n, k;
        cin>>n>>k;
        if (n >= k && (n % 2 == k % 2)) {
            YES;
            for (int i = 1; i < k; ++i) {
                cout << 1 << " ";
            }
            cout << n - (k - 1) << "\n";
        }
        else if (n >= 2 * k && n % 2 == 0) {
            YES;
            for (int i = 1; i < k; ++i) {
                cout << 2 << " ";
            }
            cout << n - 2 * (k - 1) << "\n";
        }
        else {
            NO;
        }
    }
    
    re;
    
}