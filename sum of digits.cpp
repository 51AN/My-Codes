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
        long long int n,num=0;
        int r;
        cin>>n;

        while (n!=0)
            {
                r=n%10;
                num=num*10+r;
                n/=10;
            }
        cout<<num<<"\n";
    }
    ekdin_to_ferot_jetei_hobe;
}

