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
        int n,odd=0,even=0;
        cin>>n;
        int a[2*n];
        for(int i=0;i<(2*n);i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<(2*n);i++)
        {
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }

        if(even==odd)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";


    }



    return 0;
}