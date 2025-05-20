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
        int h1 = 0, h2 = 0, m1 = 0, m2 = 0;
        h1 = (s[0] - '0') * 10;
        h2 = s[1] - '0';
        m1 = (s[3] - '0') * 10;
        m2 = s[4] - '0';
        int hour = h1 + h2;
        int minute = m1 + m2;
        bool isPM = false;
        if(hour >= 12){
            isPM = true;
            if(hour != 12){
                hour -= 12;
            }
        }
        string out = "";
        if(!isPM){
            if(hour == 0){
                hour = 12;
            }
            if(hour < 10){
                out += "0";
            }
            out += to_string(hour);
            out += ":";
            if(minute < 10){
                out += "0";
            }
            out += to_string(minute);
            out += " AM";
            cout<<out<<nl;
        }
        else{
            if(hour < 10){
                out += "0";
            }
            out += to_string(hour);
            out += ":";
            if(minute < 10){
                out += "0";
            }
            out += to_string(minute);
            out += " PM";
            cout<<out<<nl;
        }
    }
    
    re;
    
}