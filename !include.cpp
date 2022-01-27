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
        string a;
        cin>>a;
        ll lastPos;
        ll cnt = 0;

            for(int j=0 ; j<s.size() ; j++)
            {
                if(a[0]==s[j])
                {
                    lastPos =  j;
                    break;
                }
            }
        for(int i=1 ; i<a.size() ; i++)
        {
            
            for(int j=0 ; j<s.size() ; j++)
            {
                if(a[i]==s[j])
                {
                    cnt += abs(lastPos - j);
                    lastPos = j;

                }
            }

        }
        cout<<cnt<<nl;

    }

    ekdin_to_ferot_jetei_hobe;
}