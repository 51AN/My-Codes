#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>neg,pos,zeros;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            neg.push_back(a[i]);
        }
        else if(a[i]==0)
        {
            zeros.push_back(a[i]);

        }
        else
        {
            pos.push_back(a[i]);
        }
    }
    if(pos.empty())
    {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();

    }
    if(neg.size()%2==0)
    {
        zeros.push_back(neg.back());
        neg.pop_back();
    }
    cout<<neg.size()<<" ";
    for(int i=0;i<neg.size();i++)
    {
        cout<<neg[i]<<" ";

    }
    cout<<'\n';
    cout<<pos.size()<<" ";
    for(int i=0;i<pos.size();i++)
    {
        cout<<pos[i]<<" ";

    }
    cout<<'\n';
    cout<<zeros.size()<<" ";
    for(int i=0;i<zeros.size();i++)
    {
        cout<<zeros[i]<<" ";

    }
    return 0;
}
