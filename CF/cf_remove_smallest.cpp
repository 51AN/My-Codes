#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int t,n,a[56];
    cin>>t;

    while(t--)
    {
        cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    cout<<"YES"<<"\n";
    else
    {
    sort(a,a+n);

    vector<int>v1;
    int dif=0;

    for(int i=1;i<n;i++)
    {
        dif=abs(a[i]-a[i-1]);
        v1.push_back(dif);
    }
    sort(v1.begin(),v1.end(),greater<int>());
    if(v1[0]>1)
        cout<<"NO"<<"\n";
    else
        cout<<"YES"<<"\n";
    }
    }


    return 0;
}