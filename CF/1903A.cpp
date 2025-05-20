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
    long long t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n;
        cin>>k;
        bool isSorted = true;
        bool solution = false;
        long long temp = 0;
        long long a[n];
        for (int i = 0; i < n; i++){
            cin>>a[i];
            if (a[i] >= temp){
                temp = a[i];
            } else{
                isSorted = false;
            }
        }
        
        if(k>1){
            solution = true;
        } else{
            if(isSorted){
                solution = true;
            }
        }
        if(solution){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    re;
    
}

