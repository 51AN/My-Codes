#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,d, a[105];
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        sort(a,a+n);
        
        bool flag = false;
        
        for(int i=1; i<n; i++)
        {
            if(a[i] + a[i-1] <= d)
            {
                flag = true;
                break;
            }
        }
        if(a[n-1] <= d || flag == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}