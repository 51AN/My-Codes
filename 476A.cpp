#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
 
    int n,m;
    cin>>n>>m;
    int cnt=0;

    if(n%2==0)
        cnt=n/2;
       
    else
        cnt=(n/2)+1;
        
    int flag=0;
    while(cnt%m!=0)
    {
        cnt++;
        if(cnt>n)
            {
                flag=1;
                break;
            }
            
    }
    if(flag==0)
        cout<<cnt;
    else if(flag==1)
        cout<<-1;


    ekdin_to_ferot_jetei_hobe;
}
