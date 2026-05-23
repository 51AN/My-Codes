/*
 * @lc app=leetcode id=274 lang=cpp
 *
 * [274] H-Index
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(), citations.end(), greater<int>()); // Sort in descending order
        int h = 0; // Initialize h-index
        for (int i = 0; i < n; i++) {
            if (citations[i] >= i + 1) { // Check if the number of citations is greater than or equal to the number of papers
                h = i + 1; // Update h-index
            } else {
                break; // If we find a paper that has fewer citations than its rank, we can stop
            }
        }
        return h; // Return the h-index
    }
};

int main() {
    Solution sol;
    vector<int> citations1 = {3, 0, 6, 1, 5};
    vector<int> citations2 = {1, 3, 1};
    cout << sol.hIndex(citations1) << endl; // Output: 3
    cout << sol.hIndex(citations2) << endl; // Output: 1
    return 0;
}
// @lc code=end

