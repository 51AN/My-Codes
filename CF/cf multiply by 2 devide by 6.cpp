#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long int n, s = 0;
		cin >> n;
		while(1) {
			if(n% 3 && n% 6)
				break;
			if(n == 1)
				break;
			if(n % 6 == 0)
                {
				n /= 6;
				s++;
                }
			else if(n % 3 == 0)
                {
				n /= 3;
				s += 2;
                }
		}

		if(n == 1)
			cout << s << endl;
		else
			cout << "-1" << endl;
	}

	return 0;
}
