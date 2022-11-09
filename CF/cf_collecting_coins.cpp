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
        long long int n,a[3];
        cin>>a[0]>>a[1]>>a[2]>>n;
        sort(a,a+3);
        long long dif=a[2]-a[0];
        dif += a[2]-a[1];

        if(n>=dif)
        {
            n -= dif;
        
        if(n%3 == 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }


    return 0;
}