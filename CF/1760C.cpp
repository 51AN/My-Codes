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
        ll n;
        cin>>n;
        ll a[n];
        ll max = 0;
        ll secondMax = 0;
        f(i,n){
            cin>>a[i];
            if(a[i]>max){
                max = a[i];
            }
        }
        bool maxRepeated = false;
        f(i, n){
            if(a[i] != max){
                if(a[i]>secondMax){
                    secondMax = a[i];
                }
            } else{
                if(maxRepeated){
                    secondMax = a[i];
                    break;
                } else {
                    maxRepeated = true;
                }
            }
        }
        
        f(i, n){
            if(a[i] != max){
                cout<< a[i] - max << " ";
            } else if (secondMax == 0){
                cout<< 0 << " ";
            } else {
                cout<< max - secondMax << " ";
            }
        }
        cout<<nl;

    }
    
    re;
    
}