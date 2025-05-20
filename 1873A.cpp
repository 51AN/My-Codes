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
        string s;
        cin>>s;
        bool found = false;
        
        for(int i = 0; i<s.length()-1;i++){
            if(s == "abc"){
                found = true;
                YES;
                break;
            }
            string temp;
            temp = s;
            swap(temp[i],temp[i+1]);
            if(temp == "abc"){
                found = true;
                YES;
                break;
            }
        }
        string temp = s;
        swap(temp[0], temp[2]);
        if(temp == "abc"){
            found = true;
            YES;
        }
        if(!found){
            NO;
        }
    }
    re;
}