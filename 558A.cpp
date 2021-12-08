#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    // int n;
    // cin>>n;
    // int x[n],a[n];
    // int neg[n]={0},pos[n]={0};
    // int aneg[n]={0},apos[n]={0};
    // int nega=0,posi=0;

    // for(int i=0;i<n;i++)
    // {
    //     cin>>x[i]>>a[i];
    //     if(x[i]<0)
    //     {
    //         nega++;
    //         neg[i]=x[i];
    //         aneg[i]=a[i];
    //     }
    //     else
    //     {
    //         posi++;
    //         pos[i]=x[i];
    //         apos[i]=a[i];
    //     }
    // }
    // int min=0;
    // if(nega<posi)
    // {
    //     min=nega;
    // }
    // else
    //     min=posi;
    

    vector<pair<int,int>>neg;
    vector<pair<int,int>>pos;

    int x,a,num,i;
    cin>>num;

    for(i=0;i<num;i++)
    {
        cin>>x>>a;
        if(x<0)
        {
            neg.push_back(pair<int,int>(x,a));
        }
        else
        {
            pos.push_back(pair<int,int>(x,a));
        }
    }
    
    sort(pos.begin(),pos.end());
    sort(neg.rbegin(),neg.rend());


    int n,p,ans=0;
    n=neg.size();
    p=pos.size();

    if(n==p)
    {
        for(i=0;i<p;i++)
        {
            ans+=(pos[i].second+neg[i].second);
        }
    }
    else if(n>p)
    {
        for(i=0;i<p;i++)
        {
            ans+=(pos[i].second+neg[i].second);
        }
        ans+=neg[i].second;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            ans+=(pos[i].second+neg[i].second);
        }
        ans+=pos[i].second;
    }
    cout<<ans;

    ekdin_to_ferot_jetei_hobe;
}
