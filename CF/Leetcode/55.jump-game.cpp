/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxReach = 0;
        for (int i = 0; i < n; i++) {
            if (i > maxReach) {
                return false;
            }
            maxReach = max(maxReach, i + nums[i]);
        }
        return true;
    }
};
// @lc code=end

