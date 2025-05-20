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


// Helper function to perform backtracking
void backtrack(int a, int b, int c, int remaining_ops, int &maxBananas) {
    // If no more operations can be performed, calculate the product
    if (remaining_ops == 0) {
        maxBananas = max(maxBananas, a * b * c);
        return;
    }

    // Recursively try all three options: increment a, increment b, or increment c
    backtrack(a + 1, b, c, remaining_ops - 1, maxBananas); // Increment a
    backtrack(a, b + 1, c, remaining_ops - 1, maxBananas); // Increment b
    backtrack(a, b, c + 1, remaining_ops - 1, maxBananas); // Increment c
}

int maximizeBananas(int a, int b, int c) {
    int maxBananas = a * b * c; // Start with the initial product
    backtrack(a, b, c, 5, maxBananas); // Start backtracking with 5 operations
    return maxBananas;
}

int main() {
    test(t) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << maximizeBananas(a, b, c) << endl;
    }

    return 0;
}
