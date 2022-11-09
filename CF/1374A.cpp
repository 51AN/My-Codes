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
        int n,x,y;
        cin>>x>>y>>n;

        cout<<(((n-y)/x)*x)+y<<"\n";
    }


    return 0;
}
