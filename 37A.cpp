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

    sort(a,a+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";

    // }
    int cnt[1000];
    for(int i=0;i<1000;i++)
    {
        cnt[i]=1;

    }
    int m=n;
    for(int i=1,j=0;i<m;i++)
    {
        if(a[i]==a[i-1])
        {
            n--;
            cnt[j]++;

        }
        else if(a[i]!=a[i-1])
        {
            j++;
        }
    }
    sort(cnt,cnt+1000,greater<int>());
    cout<<cnt[0]<<" "<<n;
    ekdin_to_ferot_jetei_hobe;
}
