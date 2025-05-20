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

string convertToLatinI(string& word) {
    if (word.size() >= 2 && word.substr(word.size() - 2) == "us") {
        return word.substr(0, word.size() - 2) + "i";
    }
    return word;
}

int main(){
    fastIO;
    test(t){
        string s;
        cin>>s;
        ll size = s.size();
        
        cout<<convertToLatinI(s)<<endl;
    }

    re;
    
}
