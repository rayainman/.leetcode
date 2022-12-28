/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // SUM
        // int goal = (nums.size()+1) * nums.size() / 2;
        // for ( auto& n : nums) {
        //     goal -= n;
        // }
        // return goal;

        // XOR
        int res = nums.size();
        for(int i=0; i< nums.size(); i++){
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }
};
// @lc code=end

