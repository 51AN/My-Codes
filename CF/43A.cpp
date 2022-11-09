#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    // int t;
    // cin>>t;
    // string t1,t2;
    // int g1=0,g2=0;
    // cin>>t1;
    // g1++;
    // t--;
    // while(t--)
    // {
    //     cin>>t2;
    //     if(t1!=t2)
    //     {
    //         g2++;
    //     }
    //     else
    //      {
    //          g1++;
    //      }
        

    // }
    // if(g1>g2)
    //     cout<<t1;
    // else
    //     cout<<t2;
    int n, goal=0;
    cin >> n;

    string team, win;
    while (n--)
    {
        if (goal != 0)
        {
            cin >> team;
            if (team == win)
            {
                goal += 1;
            }
            else
            {
                goal -= 1;
            }
        }
        else
        {
            cin >> win;
            goal = 1;
        }
    }
    cout << win;
    ekdin_to_ferot_jetei_hobe;
}
