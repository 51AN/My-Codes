#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,cntodd=0,cnteven=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a&1)
                cntodd++;
            else
                cnteven++;
        }
        if ((cnteven == n) || (!(n & 1) && cntodd == n))
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";

    }



    return 0;
}