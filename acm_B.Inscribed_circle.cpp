#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    int cnt=1;

    while(t--)
    {
        double r;
        cin>>r;
        double ans;
        ans=4*(r*r)-(pi*(r*r));
        printf("Case %d: %.2lf\n",cnt,ans);
        cnt++;
    }

    return 0;
}