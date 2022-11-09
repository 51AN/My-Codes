#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int s=0,d=0;

    vector<int>vec;
    int a;

    for(int i=1;i<=n;i++)
    {
        cin>>a;
        vec.push_back(a);

    }
    while(vec.size())
    {
        s=max(vec.begin(),vec.end());
    }


    return 0;
}