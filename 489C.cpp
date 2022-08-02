#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

using namespace std;


int main()
{
    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    ll m,s;
    cin>>m>>s;

    if(s<=0)
    {
        if(m==1)
        {
            cout<<"0 0"<<nl;
            ekdin_to_ferot_jetei_hobe;
        }
        else
        {
            cout<<"-1 -1"<<nl;
            ekdin_to_ferot_jetei_hobe;
        }

    }

    string max,min;

    for(int i = 0 ; i < m ; i++)
    {
        int k = min(9,s);
        max.push_back('0' + k);
        s -= k;
    }

    if(s>0)
    {
        cout<<"-1 -1"<<nl;
        ekdin_to_ferot_jetei_hobe;        
    }

    for(int i = m-1 ; i>=0 ; i--)
    {
        min.push_back(max[i]);
    }
    int i = 0 ;
    while( min[i] == '0')
        {i++;}
        
        min[0]++;
        min[i]--;
    
    cout<<min<<" "<<max;




    
    ekdin_to_ferot_jetei_hobe;
}