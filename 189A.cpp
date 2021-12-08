#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{
//find out max(x+y+z) from the equation xa + yb + zc = n, iterate over x and y, to find out c
    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int x=0;x<=4000;x++)
        for(int y=0;y<=4000;y++)
        {
            int zc=n-(x*a + y*b);
            if(zc<0)//reduce time complexity
                break;
            double z= (double)zc/c;

            if(z==(int)z)
                ans=max(ans,(int)z+y+x);

        }
    cout<<ans;

    ekdin_to_ferot_jetei_hobe;
}
