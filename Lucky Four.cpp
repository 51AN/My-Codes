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

        ll n,cnt=0;
        cin>>n;
        while(n!=0)
        {

            ll check;
            check=n%10;
            if(check==4)
                cnt++;
            n/=10;
        }
        cout<<cnt<<"\n";
    }

    ekdin_to_ferot_jetei_hobe;
}

