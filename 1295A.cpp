#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            for(int i=0;i<(n/2);i++)
                cout<<'1';
                cout<<nl;
        }
        else
        {
            cout<<'7';
            for(int i=0;i<(n-3)/2;i++)
                cout<<'1';
                cout<<nl;
        }
        // int check;
        // check=n%3;
        // if(check==1)
        // {
        //     for(int i=1;i<=(n-4)/3;i++)
        //     {
        //         cout<<'7';
        //     }
        //     cout<<'1'<<'1'<<nl;
        // }
        // else if(check==2)
        // {
        //     for(int i=1;i<=(n-2)/3;i++)
        //     {
        //         cout<<'7';
        //     }
        //     cout<<'1'<<nl;
        // }
        // else
        // {
        //     for(int i=1;i<=n/3;i++)
        //     {
        //         cout<<'7';
        //     }
        //     cout<<nl;

        // }
    }

    ekdin_to_ferot_jetei_hobe;
}
