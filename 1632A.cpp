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
        ll n,m,rowb,colb,rowc,colc;
        bool rowplus = true;
        bool colplus = true;
        cin>>n>>m>>rowb>>colb>>rowc>>colc;
        ll cnt = 0;
        for(int i=rowb,j=colb;;)
        {
            if(i==rowc || j==colc)
            {
                cout<<cnt/2<<nl;
                break;
            }
            if(i==n)
            {
                rowplus=false;
            }
            if(j==m)
            {
                colplus = false;
            }
            if(i==0)
            {
                rowplus=true;
            }
            if(j==0)
            {
                colplus=true;
            }

           if(rowplus)
           {
               ++i;
               ++cnt;

           }
           else
           {
               --i;
               ++cnt;
           }
           if(colplus)
           {
               ++j;
               ++cnt;
           }
           else
           {
               --j;
               ++cnt;
           }
        }


            

        

        
    }
    ekdin_to_ferot_jetei_hobe;
}
