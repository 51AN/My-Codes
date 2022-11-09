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
        vector<pair<int,int>>v;
        int temp,n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>temp;
            v.push_back(make_pair(temp,i));
        }

        sort(v.begin(),v.end());
        int min_pos=0, max_pos=0;
        min_pos=v[0].second;
        max_pos=v[n-1].second;
        if(n%2!=0)
        {
            if(min_pos<=(n/2+1)&&max_pos<=(n/2+1) || min_pos>=(n/2+1)&&max_pos>=(n/2+1) )
            {
                if(min_pos<=(n/2+1)&&max_pos<=(n/2+1))
                {

                    cout<<max(min_pos,max_pos)<<nl;
                }
                else
                {
                    cout<<max((n-min_pos+1),(n-max_pos+1))<<nl;
                }
            }
            else
            {
                if(min_pos<(n/2+1))
                {
//                  
                    if(min_pos>(max_pos-min_pos))
                    {
                        cout<<(n-max_pos)+(max_pos-min_pos)+1<<nl;
                    }
                    else
                    cout<<(min_pos+(n-max_pos+1))<<nl;
                }
                else
                {
                    if(max_pos>(min_pos-max_pos))
                    {
                        cout<<(n-min_pos)+(min_pos-max_pos)+1<<nl;
                    }
                    else
                    cout<<(max_pos+(n-min_pos+1))<<nl;
                }
            }
        }
        else
        {
            if((min_pos<=(n/2)&&max_pos<=(n/2)) || (min_pos>(n/2)&&max_pos>(n/2)) )
            {
                if(min_pos<=(n/2)&&max_pos<=(n/2))
                {
                    cout<<max(min_pos,max_pos)<<nl;
                }
                else
                {
                    cout<<max((n-min_pos+1),(n-max_pos+1))<<nl;
                }
            }
            else
            {
                if(min_pos<=(n/2))
                {
//
                    if(min_pos>(max_pos-min_pos))
                    {
                        cout<<(n-max_pos)+(max_pos-min_pos)+1<<nl;
                    }
                    else
                    cout<<(min_pos+(n-max_pos+1))<<nl;
                }
                else
                {
                    if(max_pos>(min_pos-max_pos))
                    {
                        cout<<(n-min_pos)+(min_pos-max_pos)+1<<nl;
                    }
                    else
                    cout<<(max_pos+(n-min_pos+1))<<nl;
                }
            }
            

        }


    }
    

    ekdin_to_ferot_jetei_hobe;
}
