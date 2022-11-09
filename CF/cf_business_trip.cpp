#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin>>k;
    int a[12];
    int i;
    for(i=0;i<12;i++)
    {
        cin>>a[i];
    }
    sort(a,a+12);
    int sum=0,cum=0;
    int cnt=0;

    cum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+a[10]+a[11];

    i--;
    if(cum<k)
    {
        cout<<"-1";
    }
    else
    {
    while(sum<k)
    {
       
        sum+=a[i];
        i--;
        cnt++;
    }
    cout<<cnt;
    }

    return 0;
}