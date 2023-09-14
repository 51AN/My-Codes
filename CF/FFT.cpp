#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO                                           (ios::sync_with_stdio(0),cin.tie(0));
#define re                                               return 0;
#define nl                                               "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i >= 0 ; i --)
#define v(i)                                             vector<int>v[i];
#define sortv(a)                                         sort(a.begin(),a.end())
#define test(t)                                          ll t; cin>>t; while(t--)
#define YES                                              cout<<"YES"<<endl
#define NO                                               cout<<"NO"<<endl
using namespace std;

// For storing complex values of nth roots
// of unity we use complex<double>
typedef complex<double> cx;

// Recursive function of FFT
vector<cx> fft(vector<cx>& a)
{
	int n = a.size();

	// if input contains just one element
	if (n == 1)
		return vector<cx>(1, a[0]);

	// For storing n complex nth roots of unity
	vector<cx> w(n);
	for (int i = 0; i < n; i++) {
		double alpha = -2 * M_PI * i / n;
		w[i] = cx(cos(alpha), sin(alpha));
	}

	vector<cx> A0(n / 2), A1(n / 2);
	for (int i = 0; i < n / 2; i++) {

		// even indexed coefficients
		A0[i] = a[i * 2];

		// odd indexed coefficients
		A1[i] = a[i * 2 + 1];
	}

	// Recursive call for even indexed coefficients
	vector<cx> y0 = fft(A0);

	// Recursive call for odd indexed coefficients
	vector<cx> y1 = fft(A1);

	// for storing values of y0, y1, y2, ..., yn-1.
	vector<cx> y(n);

	for (int k = 0; k < n / 2; k++) {
		y[k] = y0[k] + w[k] * y1[k];
		y[k + n / 2] = y0[k] - w[k] * y1[k];
	}
	return y;
}

int main()
{
    fastIO;
	vector<cx> a{1, 2, 3, 4};
	vector<cx> b = fft(a);
	for (int i = 0; i < 4; i++)
		cout << b[i] << endl;
	re;
}