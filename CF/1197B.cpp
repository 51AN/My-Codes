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
    int max=0,pos=0;
    for(int i=0;i<n;i++)    
        {cin>>a[i];
            if(max<a[i])
                {max=a[i];
                pos=i;}
                
        }
        cout<<max<<" "<<pos<<nl;
    for(int i=pos;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            cout<<"NO"<<nl;
            return 0;
        }
    }
     for(int i=pos;i>0;i--)
    {
        if(a[i]<a[i-1])
        {
            cout<<"NO"<<nl;
            return 0;
        }
    }
    
    cout<<"YES"<<nl;

    
    

    ekdin_to_ferot_jetei_hobe;
}
