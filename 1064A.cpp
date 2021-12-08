#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();
    int a[4];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if((a[0]+a[1])>a[2])
        cout<<0;
    else if((a[0]+a[1])==a[2])
        cout<<1;
    else
        cout<<(a[2]-(a[0]+a[1]))+1;



    ekdin_to_ferot_jetei_hobe;
}

