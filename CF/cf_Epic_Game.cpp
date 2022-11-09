#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,n,gcd;

    cin>>a>>b>>n;

    while(1)
    {
    for(int i=1; i <= a && i <= n; ++i)
    {
        
        if(a%i==0 && n%i==0)
            gcd = i;
    }
    if(n>=gcd)
        n-=gcd;
    else
        {
            cout<<1;
            return 0;
        }

    for(int i=1; i <= b && i <= n; ++i)
    {
        
        if(b%i==0 && n%i==0)
            gcd = i;
    }
    if(n>=gcd)
        n-=gcd;
    else
        {
            cout<<0;
            return 0;
        }

    }




    return 0;
}