/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) { // If there's only one element, we're already at the last index, so no jumps are needed
            return 0;
        }
        int jumps = 0; // Number of jumps needed
        int currentEnd = 0; // The farthest we can reach with the current number of jumps
        int farthest = 0; // The farthest we can reach with the next jump
        for (int i = 0; i < n - 1; i++) {
            farthest = max(farthest, i + nums[i]); // Update the farthest we can reach
            if (i == currentEnd) { // Time to make a jump
                jumps++;
                currentEnd = farthest; // Update the current end to the farthest we can reach with the next jump
                if (currentEnd >= n - 1) { // If we can reach or exceed the last index, we can stop
                    break;
                }
            }
        }
        return jumps;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 1, 1, 4};
    vector<int> nums2 = {2, 3, 0, 1, 4};
    vector<int> nums3 = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << sol.jump(nums) << endl; // Output: 2
    cout << sol.jump(nums2) << endl; // Output: 2
    cout << sol.jump(nums3) << endl; // Output: 3
    return 0;
}
// @lc code=end

