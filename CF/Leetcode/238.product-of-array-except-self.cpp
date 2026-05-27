/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // phase 1: calculate the product of all the elements to the left of the current element
        vector<int> ans(nums.size(), 1);
        for(int i=1; i<nums.size(); i++){
            ans[i] = ans[i-1]*nums[i-1];
        }
        // phase 2: calculate the product of all the elements to the right of the current element and multiply it with the left product
        int right = 1;
        for(int i=nums.size()-1; i>=0; i--){
            ans[i] *= right;
            right *= nums[i];
        }
        return ans;
    }
};
// @lc code=end

