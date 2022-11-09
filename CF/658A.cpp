#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n,c;
    int score[1010],time[1010];
    cin>>n>>c;
    int cntl=0,cntr=0;
    for(int i=0; i<n; i++)
        cin>>score[i];
    for(int i=0; i<n; i++)
        cin>>time[i];

    int limak=0,radoewoosh=0;
   
    for(int i=0; i<n; i++)
    {
        cntl+=time[i];
        limak+=max(0,score[i]-c*cntl);
    }
    
    sort(score,score+n, greater<int>());
    sort(time,time+n, greater<int>());
    for(int i=0; i<n; i++)
    {
        cntr+=time[i];
        radoewoosh+=max(0,score[i]-c*cntr);
    }

    if(limak>radoewoosh)
    {
        cout<<"Limak";
    }
    else if(limak<radoewoosh)
    {
        cout<<"Radewoosh";
    }
    else if(limak==radoewoosh)
    {
        cout<<"Tie";
    }
    

    ekdin_to_ferot_jetei_hobe;
}
