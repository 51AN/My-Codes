#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO                                           (ios::sync_with_stdio(0),cin.tie(0));
#define r0                                               return 0;
#define nl                                                "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i => 0 ; i --)
#define v(i)                                             vector<int>v[i];
#define sortv(a)                                         sort(a.begin(),a.end())
#define test(t)                                          ll t; cin>>t; while(t--)
#define YES                                              cout<<"YES"<<endl
#define NO                                               cout<<"NO"<<endl


using namespace std;



int main()
{
    fastIO;
    
    test(t){

        char a[8][8];

        f(i,8){
            f(j,8){
                cin>>a[i][j];
            }
        }
        bool validateRow = false;
        bool validateCol = false;
        f(i,8){
            ll cntRow = 1;
            f(j,7){
                if(a[i][j] == 'R'){
                    if(a[i][j+1] == 'R'){
                        cntRow++;
                    }
                }
                
            }
            if(cntRow == 8){
                validateRow = true;
            }
        }

        f(j,8){
            ll cntCol = 1;
            f(i,7){
                   if(a[i][j] == 'B'){
                    if(a[i+1][j] == 'B'){
                        cntCol++;
                    }
                }
            }
            if(cntCol == 8){
                validateCol = true;
            }
        }

        if(validateRow){
            cout<<"R"<<nl;
        }
        if(validateCol){
            cout<<"B"<<nl;
        }
        
    }

    


    r0;
}