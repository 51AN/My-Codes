#include<bits/stdc++.h>
using namespace std;
long long int x[100005]={0};
long long int y[100005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int a,i,b,m=0;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>b;
        x[b]++;
    }
    y[0]=0;
    y[1]=x[1];
    for(i=2;i<=100000;i++)
    {
        y[i]=max(y[i-1],y[i-2]+i*x[i]);
    }
    cout<<y[100000];


    return 0;
}