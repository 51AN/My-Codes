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
        int a[2*n];
        int b[2*n]={0};
        vector<int>v;
        for(int i=0;i<2*n;i++)
        {

            cin>>a[i];


        }
        for(int i=0;i<2*n;i++)
        {
            if(b[a[i]]==0)
            {
                b[a[i]]=1;
                v.push_back(a[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
