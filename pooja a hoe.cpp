#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();
    double y;
    int x;
    cin>>x>>y;
    if(x%5==0 && x<=(y-0.5))
    {
        printf("%.2lf",y-x-0.5);
    }
    else
        printf("%.2lf",y);


    ekdin_to_ferot_jetei_hobe;
}

