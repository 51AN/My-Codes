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
        string s;
        cin>>s;
        ll a = 0, b = 0;
        bool isPossible = true;
        for(int i=0;i<s.length();i++)
        {
            if((s[i] == 'a') && (s[i+1] == 'a'))
            {
                ++a;
            }
            if((s[i] == 'a') && (s[i+1] == 'b'))
            {
                ++a;
                if(a<=1)
                {
                    isPossible = false;
                    break;
                }
                a=0;
            }
            if((s[i] == 'b') && (s[i+1] == 'b'))
            {
                ++b;
            }
            if((s[i] == 'b') && (s[i+1] == 'a'))
            {
                ++b;
                if(b<=1)
                {
                    isPossible = false;
                    break;
                }
                b=0;
            }
            if(s[i] == 'a' && s[i+1] == '\0')
            {
                ++a;
                if(a<=1)
                {
                    isPossible = false;
                    break;
                }
            }
            if(s[i] == 'b' && s[i+1] == '\0')
            {
                ++b;
                if(b<=1)
                {
                    isPossible = false;
                    break;
                }
            }


            
        }
        // cout<<"a: "<<a<<"b: "<<b<<nl;
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