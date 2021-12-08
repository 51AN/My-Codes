#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();
    int four=0,seven=0;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='7')
            seven++;
        else if(s[i]=='4')
            four++;
        else
            break;

    }

    ekdin_to_ferot_jetei_hobe;
}
