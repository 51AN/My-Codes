#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,cnt1=0,cnt0=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            cnt1+=2;
        }
        else
        {
            cnt0+=2;
        }
        
    }
    
    cout<<n-min(cnt1,cnt0);


    return 0;
}