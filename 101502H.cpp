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


    int a,b,c,d;
    cin>>a>>b>>c>>d;
    double first, second;
    first=b*log(a);
    second=d*log(c);
    if(first<second)
        cout<<"<"<<"\n";
    else
        cout<<">"<<"\n";
    }

    ekdin_to_ferot_jetei_hobe;
}
