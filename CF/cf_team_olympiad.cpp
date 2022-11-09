#include<bits/stdc++.h>
using namespace std;
int main()
{       
    std:: ios::sync_with_stdio(0);
    cin.tie(NULL);
    vector<int>v1,v2,v3;

    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;

        if(a==1)
        {
            v1.push_back(i);
        }
        else if(a==2)
        {
            v2.push_back(i);
        }
        else if(a==3)
        {
            v3.push_back(i);
        }
        
    }
    int mn;
    mn=min(v1.size(),min(v2.size(),v3.size()));

    cout<<mn<<"\n";

    for(int i=0;i<mn;i++)
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<"\n";


    return 0;
}