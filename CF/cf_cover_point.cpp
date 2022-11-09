#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y;
    cin>>n;
    int max=0;

    for(int i=0;i<n;i++)
    {

        cin>>x>>y;
        if(max<=x+y)
            max=x+y;
    }
    cout<<max<<"\n";

    return 0;
}