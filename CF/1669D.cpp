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
        ll n;
        cin>>n;
        string s;
        cin>>s;

        bool isPossible = true;
        ll blue = 0, red = 0 , white =0;
        for(int i=0 ;i<n ; i++)
        {
            

            if(s[i] == 'B')
            {
                ++blue;
            }
            if(s[i] == 'R')
            {
                ++red;
            }
            if(s[i] == 'W')
            {
                
                if(blue<1 || red<1)
                {
                    
                    isPossible = false;
                    break;
                    
                }
                red =0;
                blue =0;
                
            }
            // if((i = n-1) && s[i] !='W')
            // {
            //     if(blue<1 || red<1)
            //     {
                    
            //         isPossible = false;
            //         break;
                    
            //     }
            // }

        }
    for(int i=0 ;i<n ; i++)
        {
            if(s[i] == 'W')
            {
                ++white;
            }
        }
        

        //cout<<red<<" "<<blue<<" "<<white<<nl;
        if(s[n-1] != 'W' && (blue<1 || red<1))
                {
                    
                    isPossible = false;
                    
                    
                }
        if(white == n)
        {
            isPossible = true;
        }
        if(n == 1)
        {
            isPossible = false;
        }
        if(isPossible)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }

    }

    ekdin_to_ferot_jetei_hobe;
}