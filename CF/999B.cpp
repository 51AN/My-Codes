#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            reverse(s.begin(),s.begin()+i);
        }
    }
    cout<<s;


    ekdin_to_ferot_jetei_hobe;
}

