#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // In case k is greater than the size of the array
        
        // Step 1: Reverse the entire array
        std::reverse(nums.begin(), nums.end());
        
        // Step 2: Reverse the first k elements
        std::reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Reverse the remaining n - k elements
        std::reverse(nums.begin() + k, nums.end());
    }
};

int main(){
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    s.rotate(nums, 3);
    for(int i = 0; i < nums.size(); i++){
        std::cout<<nums[i]<<" ";
    }
    return 0;
}