#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,cnt1=0,extramax=-1,extra0=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            cnt1++;
            if(extra0>0)
            {
                extra0--;
            }
        }
        else
        {
            extra0++;
            if(extra0>extramax)
            {
                extramax=extra0;
            }
        }
    }
    cout<<cnt1+extramax;
    return 0;
}