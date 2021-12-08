#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n,m;
    cin>>n>>m;
    char a[102][102];
    int row[4],col[4];
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];

            if(a[i][j]=='*')
            {
                row[k]=i+1;
                col[k]=j+1;
                ++k;
            }

        }
    }
    if(row[1]==row[2])
    {
        cout<<row[3]<<" ";

        if(col[3]==col[2])
        {
            cout<<col[1];
        }
        else if(col[3]==col[1])
        {
            cout<<col[2];
        }

    }

    else if(row[2]==row[3])
    {
        cout<<row[1]<<" ";

        if(col[1]==col[2])
        {
            cout<<col[3];
        }
        else if(col[1]==col[3])
        {
            cout<<col[2];
        }

    }
    else if(row[3]==row[1])
    {
        cout<<row[2]<<" ";

        if(col[2]==col[1])
        {
            cout<<col[3];
        }
        else if(col[2]==col[3])
        {
            cout<<col[1];
        }

    }

    
    

    ekdin_to_ferot_jetei_hobe;
}
