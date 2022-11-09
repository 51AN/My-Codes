#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"


using namespace std;


int main()
{

    ll t;
    cin>>t;

    while(t--)
    {
        ll xa,ya,xb,yb,xf,yf;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;

        if(xa==xb && xb==xf)
        {
            if((ya>yb && (yf>ya || yf<yb)) || (ya<yb && (yf<ya || yf>yb)))
            {
                cout << abs(ya-yb);
            }
            else
            {
                cout << abs(yb-ya) + 2;
            }
        }
        else if(ya==yb && yb==yf)
        {
            if((xa>xb && (xf>xa || xf<xb)) || (xa<xb && (xf<xa || xf>xb)))
            {
                cout << abs(xa-xb);
            }
            else
            {
                cout << abs(xb-xa) + 2;
            }
        }
        else
        {
            cout << abs(xa-xb)+abs(ya-yb);
        }
 
        cout << nl;



    }

    ekdin_to_ferot_jetei_hobe;
}