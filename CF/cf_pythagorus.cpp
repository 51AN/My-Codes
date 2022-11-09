#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,cnt=0;
    double c;
    cin>>n;
    for(a=1;a<=n;a++)
    {
        for(b=a+1;b<=n;b++)
        {
            c=a*a + b*b;
            c=sqrt(c);
            if(floor(c)==c && c<=n)
                cnt++;        
        }
    }
    cout<<cnt;

    return 0;
}