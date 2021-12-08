#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    int d=0;
    d=n/k;

    if(d%2==0)
    cout<<"NO"<<endl;

    else
    cout<<"YES"<<endl;


    return 0;
}