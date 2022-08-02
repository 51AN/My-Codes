#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"


using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(a>b)
        {
            while((a>0) || (b>0))
            {
                if(a>0)
                {
                    cout<<0;
                    --a;
                }
                if(b>0)
                {
                    cout<<1;
                    --b;
                }
            }
        }
        else
        {
            while((a>0) || (b>0))
            {
                if(b>0)
                {
                    cout<<1;
                    --b;
                }
                if(a>0)
                {
                    cout<<0;
                    --a;
                }
            }
        }

        cout<<nl;
        
        
        
    }

    ekdin_to_ferot_jetei_hobe;
}