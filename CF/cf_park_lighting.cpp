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
        int n,m;
        cin>>n>>m;
        int pro;
        pro=n*m;
        int sum=0;
        if(pro%2==0)
            sum=pro/2;
        else
            sum=pro/2+1;

    cout<<sum<<"\n";


    }
    return 0;
}