#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];

        long long int cnt=0;

        for(int i=1;i<n;i++)
        cnt=max(cnt,(a[i]*a[i-1]));

        cout<<cnt<<"\n";



    }



    return 0;
}