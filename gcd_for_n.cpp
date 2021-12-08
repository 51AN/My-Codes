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
        cin>>a[i];
    
    sort(a,a+n);
    int gcd=0;
    for(int i=1;i<=a[0];i++)
    {
        
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]%i!=0)
                flag=1;
        }
        if(flag)
            continue;
        else
            gcd=i;
    }
    printf("%d",gcd);
    ekdin_to_ferot_jetei_hobe;
}
