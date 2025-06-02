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

        ll a[n];

        f(i, n){
            cin>>a[i]; // input the array
        }
        ll cnt = 0;
        ll gold = 0;
        f(i,n){
            if(a[i] >= k){
                gold += a[i]; // count the number of gold robin has
            } else if (a[i] == 0 and gold > 0){
                gold--; //gives 1 gold
                cnt++; //track how many people robin has helped
            }
        }

        cout<<cnt<<endl; // print the number of people robin has given gold
    }

    re;
    
}
