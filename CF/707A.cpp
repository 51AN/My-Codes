#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();
    int n,m;

    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
                if(a[i][j]=='C' ||a[i][j]=='M' ||a[i][j]=='Y')
                {
                    cout<<"#Color";
                    ekdin_to_ferot_jetei_hobe;
                }
            }
    }
    cout<<"#Black&White";

    ekdin_to_ferot_jetei_hobe;
}

