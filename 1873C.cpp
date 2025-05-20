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
        ll a[10][10]={1,1,1,1,1,1,1,1,1,1,
                    1,2,2,2,2,2,2,2,2,1,
                    1,2,3,3,3,3,3,3,2,1,
                    1,2,3,4,4,4,4,3,2,1,
                    1,2,3,4,5,5,4,3,2,1,
                    1,2,3,4,5,5,4,3,2,1,
                    1,2,3,4,4,4,4,3,2,1,
                    1,2,3,3,3,3,3,3,2,1,
                    1,2,2,2,2,2,2,2,2,1,
                    1,1,1,1,1,1,1,1,1,1};
    test(t){
        char x[10][10];
        ll points = 0;
        f(i,10){
            f(j,10){
                cin>>x[i][j];
                if (x[i][j] == 'X'){
                    points += a[i][j];
                }
            }
        }
        cout<<points<<nl;
    }
    re;
}