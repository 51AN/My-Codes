#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();

	int t;
	cin >> t;
	while(t--)
    {
		int r, c, I;
		cin >> r >> c >> I;
        char a[101][101];


		for(int i = 1; i <= r; i ++)
            for(int j = 1; j <= c; j ++)
			a[i][j] = '.';

		for(int i = 0; i < I; i ++)
            {
			char color;
			int r1, c1, r2, c2;
			cin >> r1 >> c1 >> r2 >> c2 >> color;
			for(int i = r1; i <= r2; i ++)
                for(int j = c1; j <= c2; j ++)
                    a[i][j] = color;
            }
		for(int i = 1; i <= r; i ++){
			for(int j = 1; j <= c; j ++)
				cout << a[i][j];
			cout << "\n";
		}
	}
	ekdin_to_ferot_jetei_hobe;
}
