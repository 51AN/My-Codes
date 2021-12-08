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
    int a[2*n];
    int sum_first=0,sum_second=0;
    for(int i=0;i<2*n;i++) cin>>a[i];//taking input
    sort(a,a+2*n);//sorting
    for(int i=0;i<n;i++) sum_first+=a[i];//sum of first half
    for(int i=n;i<2*n;i++) sum_second+=a[i];//sum of second half
    if(sum_first!=sum_second) for(int i=0;i<2*n;i++) cout<<a[i]<<" ";//if both sums are not equal
    else cout<<-1;//if sum is equal then output -1                   //then output the sorted array   
    ekdin_to_ferot_jetei_hobe;
}
