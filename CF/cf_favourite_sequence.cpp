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
        int n;
        cin>>n;
        int a[n+1];
        int b[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int m=n;
        for(int i=1,j=1;i<=(n+1)/2;j+=2,i++)
        {
            b[j]=a[i];
            b[j+1]=a[m];
            m--;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<"\n";

    }

    return 0;
}
