/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0;
        for(int i=0; i<gas.size(); i++){
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if(total_gas < total_cost) return -1;

        int start = 0, current_gas = 0;
        for(int i=0; i<gas.size(); i++){
            current_gas += gas[i] - cost[i];
            if(current_gas < 0){
                start = i + 1;
                current_gas = 0;
            }
        }
        return start;
    }
};
// @lc code=end

