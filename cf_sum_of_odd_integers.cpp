#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie();
    int t ;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(k*k<=n)
        {
            if((n+k)%2==0)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }



    return 0;
}