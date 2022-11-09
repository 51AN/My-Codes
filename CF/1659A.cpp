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
        ll n, a, b;
        cin>>n>>a>>b;

        if(a==1 || b==1)
        {
            if(a==1)
            {
                ll m = b/2;
            while(b>=m)
            {
                for(int i = 0 ; i < m ; i++)
                {
                    cout<<"B";
                }
                if(a)
                {
                cout<<"R";
                --a;
                }
                b-=m;
            }
            if(a)
                cout<<"R";
            if(b)
                cout<<"B";

                cout<<nl;

            }
            else
            {
                ll m = a/2;
            while(a>=m)
            {
                for(int i = 0 ; i < m ; i++)
                {
                    cout<<"R";
                }
                if(b)
                {   cout<<"B";
                    --b;
                }
                a-=m;
            }
            if(b)
                cout<<"B";
            if(a)
                cout<<"R";
                
                cout<<nl;

            }
        }

        else if(a>=b)
        {
            ll m = a/b;

            while(a>=m)
            {
                for(int i = 0 ; i < m ; i++)
                {
                    cout<<"R";
                }
                if(b)
                {   cout<<"B";
                    --b;
                }
                a-=m;
            }
            if(b)
                cout<<"B";
            if(a)
                cout<<"R";
                
                cout<<nl;
        }
        else
        {
            ll m = b/a;

            while(b>=m)
            {
                for(int i = 0 ; i < m ; i++)
                {
                    cout<<"B";
                }
                if(a)
                {
                cout<<"R";
                --a;
                }
                b-=m;
            }
            if(a)
                cout<<"R";
            if(b)
                cout<<"B";

                cout<<nl;

        }


    }

    ekdin_to_ferot_jetei_hobe;
}