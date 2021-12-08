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
        int num=2;
        if(n%4!=0)
            cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            for(int i=1;i<=n;i++)
            {
                
                if(i==((n/2)+1))
                    num=1;
                if(i==n)
                    num += ((n/4)*2);
                cout<<num<<" ";
                num += 2;
            }
        }
        cout<<"\n";
    }
    

    return 0;
}