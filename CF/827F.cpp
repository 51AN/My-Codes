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
        string s = "a";
        string t = "a";
        test(n){

            ll type, k;
            string x;
            cin>>type>>k>>x;

            if(type == 1 ){

                f(i,k){
                    s += x;
                }

            }
            else{
                f(i,k){
                    t += x;
                }
            }

            if(s<t){
                YES;
            }
            else{
                NO;
            }

        }
        s = "a";
        t = "a";

    }

    


    r0;
}