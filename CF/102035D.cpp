#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();
    ll n,m,a,b,sum;

    cin>>n>>a>>b>>sum;

    if(((n - 1)*a + b) > sum || ((n - 1)*b + a) < sum)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;


    ekdin_to_ferot_jetei_hobe;
}

