#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mod=n%2020;
        int div=n/2020;
        if(mod<=div)
            cout<<"YES"<<"\n";
        else
         cout<<"NO"<<"\n";

    }

}