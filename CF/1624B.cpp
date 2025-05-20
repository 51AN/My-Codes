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
        ll a, b, c;
        cin>>a>>b>>c;
        bool flag = false;
        // AP means b-a = c-b. Therefore 2b = c+a. 
        // if we take m and integer then 2b = ma+c => m = (2b-c)/a
        // if 2b-c>0 and (2b-c)%a == 0 then we can find m.
        // do the same for c
        // for b, 2mb = c+a => m = (c+a)/2b. Therefore (c+a) needs to be even and (c+a)%2b == 0
        // if all conditions are satisfied then YES else NO
        if((2*b-c)>0 && (2*b-c)%a == 0){
            flag = true;
        }
        if((c+a)%2==0 && ((a+c)/2)%b == 0){
            flag = true;
        }
        if((2*b-a)>0 && (2*b-a)%c == 0){
            flag = true;
        }
        
        if(flag){
            YES;
        } else {
            NO;
        }

    }
    
    re;
    
}