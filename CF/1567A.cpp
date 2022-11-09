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
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='U')
                {
                s[i]='D';
                continue;
                }
            if(s[i]=='D')
                s[i]='U';
        }
        cout<<s<<"\n";
    }

    ekdin_to_ferot_jetei_hobe;
}

