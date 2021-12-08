#include<bits/stdc++.h>
using namespace std;
int a[10001];
int main()
{
    std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int num=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }


            sort(a,a+n);
            for(int i=0; i<k; i++)
                a[i]=-a[i];

        long long int sum=0;
        for(int i=0; i<n; i++)
            sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}

