#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=99999999,f,s;
    for(int i=1;i<n;i++)
    {
        if(min>abs(a[i]-a[i-1]))
        {
            min=abs(a[i]-a[i-1]);
            f=i-1;
            s=i;
        }
    }
    if(min>abs(a[n-1]-a[0]))
    {
        f=0;
        s=n-1;
    }

    cout<<f+1<<" "<<s+1;
    // vector<pair<int,int>>v;

    // for(int i=1;i<=n;i++)
    // {

    //     int a;
    //     cin>>a;
    //     v.push_back(pair<int,int>(a,i));

    // }
    // int min=99999999,f,s;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n && j!=i;j++)
    //     {
    //         int diff=abs(v[i].first-v[j].first);
    //         if(diff<min)
    //         {
    //             min=diff;
    //             f=v[i].first;
    //             s=v[j].first;

    //         }
    //     }
    // }
    
    // int first_flag=0,second_flag=0;
    // // cout<<f<<" "<<s<<nl;
    // for(int i=0;i<n;i++)
    // {
    //     if(first_flag==0)
    //     if(f==v[i].first)
    //     {
    //         cout<<v[i].second<<" ";
    //         first_flag=1;
    //         continue;
    //     }
        
    //     if(second_flag==0)
    //     if(s==v[i].first)
    //     {
    //         cout<<v[i].second<<" ";
    //         second_flag=1;
    //     }
    // }



    

    ekdin_to_ferot_jetei_hobe;
}
