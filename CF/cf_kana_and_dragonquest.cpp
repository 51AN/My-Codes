#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int x,n,m,N,M;
    int ans,ans1;
    cin>>t;
    while(t--)
    {
        int tag=0;
        cin>>x>>n>>m;
        ans=x;
        ans1=x;
        N=n;
        M=m;

        while(n-- && ans>0)
        {
                ans=(ans/2)+10;
                if(ans<=0)
                {
                    tag=1;
                    break;
                }
        }

        while(m-- && ans>0)
        {
                ans=ans-10;
                if(ans<=0)
                {
                    tag=1;
                    break;
                }
        }
         while(M-- && ans1>0)
         {
                ans1=ans1-10;
                if(ans1<=0)
                {
                    tag=1;
                    break;
                }
        }
        while(N-- && ans1>0)
        {
                ans1=(ans1/2)+10;
                if(ans1<=0)
                {
                    tag=1;
                    break;
                }
        }
        
        if(tag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}