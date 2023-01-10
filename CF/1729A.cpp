#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO  (ios::sync_with_stdio(0),cin.tie(0));
#define re                        return 0;
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

int main(){
    fastIO;

    test(t){
        int a,b,c;
        cin>>a>>b>>c;

        int time1 = 0;
        int time2 = 0;

        time1 = a-1;

        if(c<b){
            time2 = b - 1;
        }else{
            time2 = (c-b) + (c - 1);
        }

        


        if(time1<time2){
            cout<<1<<nl;
        }
        else if(time1>time2){
            cout<<2<<nl;
        }
        else{
            cout<<3<<nl;
        }


    }



    re;
}