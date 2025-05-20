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
    string chessBoard[64] ={"a1", "a2", "a3", "a4", "a5", "a6", "a7", "a8",
                            "b1", "b2", "b3", "b4", "b5", "b6", "b7", "b8",
                            "c1", "c2", "c3", "c4", "c5", "c6", "c7", "c8",
                            "d1", "d2", "d3", "d4", "d5", "d6", "d7", "d8",
                            "e1", "e2", "e3", "e4", "e5", "e6", "e7", "e8",
                            "f1", "f2", "f3", "f4", "f5", "f6", "f7", "f8",
                            "g1", "g2", "g3", "g4", "g5", "g6", "g7", "g8",
                            "h1", "h2", "h3", "h4", "h5", "h6", "h7", "h8"};
    test(t){
        string s;
        cin>>s;
        f(i,64){
            if(s[0] == chessBoard[i][0] || s[1] == chessBoard[i][1]){
                if(s != chessBoard[i]){
                    cout<<chessBoard[i]<<nl;
                }
            }
        }
    }
    
    re;
    
}