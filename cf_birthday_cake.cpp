#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i=0,j=0,k,l,cnt=0,ans=0;
    cin>>n;
    char a[n+1][n+1];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        cin>>a[i][j];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cnt=0;
            if(a[i][j]=='C')
            {
                for(k=i+1;k<n;k++)  
                    if(a[k][j]=='C')
                        cnt++;
                for(k=j+1;k<n;k++)  
                    if(a[i][k]=='C')
                        cnt++;
            }
            ans+=cnt;
        }
    }
    cout<<ans<<endl;
}