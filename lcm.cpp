#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();
    int t;
    cin>>t;
    while(t--)
    {

        int n,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=a[n-1];;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i%a[j]==0)
                    continue;
                else
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<i<<"\n";
                break;
            }
            flag=0;
        }
    }


    ekdin_to_ferot_jetei_hobe;
}
