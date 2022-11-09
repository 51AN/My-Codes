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
        ll a[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        ll b;
        b=a[0];
        for(int i=1;i<n;i++)
        {
            b=__gcd(a[i],b);
        }
        cout<<b<<" "<<(sum/b)<<"\n";
    }


    ekdin_to_ferot_jetei_hobe;
}
