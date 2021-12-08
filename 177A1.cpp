#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n;
    cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0,j=0;i<n,j<n;j++,i++)//main diagonal
    {
        sum+=a[i][j];
        a[i][j]=0;
    }
    for(int i=0,j=n-1;i<n,j>=0;j--,i++)///secondary main diagonal
    {
        sum+=a[i][j];
        a[i][j]=0;
    }
    for(int i=0;i<n;i++)//main row
    {
        sum+=a[n/2][i];
        a[n/2][i]=0;
    }
    for(int i=0;i<n;i++)//mian column
    {
        sum+=a[i][n/2];
        
    }
    cout<<sum;
    



    ekdin_to_ferot_jetei_hobe;
}
