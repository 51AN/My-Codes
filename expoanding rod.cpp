#include<bits/stdc++.h>
#include <math.h>
#define PI 3.1415926
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main ()
{
    fastread();
	int t, v = 1;
	cin>>t;
	double L, n, c;
	while (t--)
        {
		cin>>L>>n>>c;
		double L1 = (1.0 + n * c) * L;
		double left = 0, right = PI/2.0;
		int dd = 69;
		while (dd--)
		{
			double mid = (left + right)/2.0;
			double R = (L/2)/sin (mid);
			double L2 = 2 * R * mid;
			if (L2> L1)
				right = mid;
            else
                left = mid;

		}
		double ans = 0.5 *(L/sin (left)) -0.5 * (L/tan (left));
		printf ("Case% d: %.10lf\n", v, ans);
		v ++;
	}
	ekdin_to_ferot_jetei_hobe;
}
