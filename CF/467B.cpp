#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{
	int n,m,k,cnt=0;
	cin>>n>>m>>k;
    int a[m+2];
	for(int i=1;i<=m+1;i++) 
        cin>>a[i];
	for(int i=1;i<=m;i++)
    {
		if(__builtin_popcount(a[m+1]^a[i])<=k)
                cnt++;//^ is a XOR function taking 1 for every different bits.
                    //popcount counts how many ones and compares that with k
                    //basically __builtin_popcount(a[m+1]^a[i]) counts the binary digits that differ.
	}
	cout<<cnt;
	return 0;
}