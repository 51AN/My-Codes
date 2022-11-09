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
        int dif=0;
        vector<int>v;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n && j!=i ;j++)//changed
            {
                dif=abs(a[j]-a[i]);
                v.push_back(dif);

            }
        }
        sort(v.begin(),v.end());

        cout<<v[0]<<"\n";


    }


    return 0;
}