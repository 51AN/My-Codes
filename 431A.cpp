#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    int one,two,three,four,sum=0;
    cin>>one>>two>>three>>four;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            sum+=one;
        else if(s[i]=='2')
            sum+=two;
        else if(s[i]=='3')
            sum+=three;
        else
            sum+=four;
    }
    cout<<sum;

    ekdin_to_ferot_jetei_hobe;
}
