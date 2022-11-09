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
        int a[4];
        cin>>a[0]>>a[1]>>a[2]>>a[3];

        int s1=0,s2=0;
        if(a[0]>a[1])
        s1=a[0];
        else
        s1=a[1];

        if(a[2]>a[3])
        s2=a[2];
        else
        s2=a[3];

        sort(a,a+4);

        if((s1==a[2] && s2==a[3])||(s1==a[3] && s2==a[2]))
        {
            cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }


    return 0;
}