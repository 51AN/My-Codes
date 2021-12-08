#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=1,cnt=0;
        while(n>=a)
        {
            n-=a;
            a++;
            cnt++;
        }
        cout<<cnt<<"\n";
    }

    ekdin_to_ferot_jetei_hobe;
}

