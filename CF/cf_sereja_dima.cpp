#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int>v;
    int n,i;
    int sreja=0,dima=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    int temp1=0,temp2=0;
    // cout<<v.size();
    // for(i=0;i<n;i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    while(v.size())
    {
        sreja+=max(v.front(),v.back());
        temp1=max(v.front(),v.back());
        
        if(temp1==v.back())
            v.pop_back();
        else
            v.erase(v.begin());
        
        if(v.size()==0)
        break;
        dima+=max(v.front(),v.back());
        temp2=max(v.front(),v.back());
        
        if(temp2==v.back())
            v.pop_back();
        else
            v.erase(v.begin());
        


    }

    cout<<sreja<<" "<<dima<<endl;


    return 0;
}