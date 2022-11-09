#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int t;
    cin>>t;
    while(t--)
    {
    ll a,b,c;
    cin>>a>>b>>c;
    if (a > b)
		swap(a, b);

	if (b == a + 1) 
    {
		cout << -1 << nl;
		continue;
	}

	int diff = b - a - 1;

	if (diff < a - 1) 
    {
		cout << -1 << nl;
		continue;
	}

	int last = b + diff - (a - 1);//2*(b-a)

	if (c > last) 
    {
		cout << -1 << nl;
		continue;
	}
    ll mid=b-a;
    ll circle=2*mid;

    ll d;
    d=mid+c;
    if(d>circle)
        d-=circle;
    cout<<d<<nl;
    }

    ekdin_to_ferot_jetei_hobe;
}
