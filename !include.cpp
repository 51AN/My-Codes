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
    
    int month;
    int year;
    int day;

    cin>>day>>month>>year;

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31) 
    {
        day = 1;   month++;
    } 
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) 
    {
        day = 1;   month++;
    } 
    else if ((month == 12) && day == 31) 
    {
        day = 1;   month++;   year++;
    } 
    else if ((month == 2)) 
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
        {
            if (day == 29) 
            {
                day = 1;   month++;
            } 
            else 
            {
                day = day + 1;
            }
        } 
        else 
        {
            if (day == 28) 
            {
                day = 1; month++;
            }
        }
    } 
    else 
    {
        day = day + 1;
    }


    cout<<day<<"/"<<month<<"/"<<year<<nl;

    re;

}