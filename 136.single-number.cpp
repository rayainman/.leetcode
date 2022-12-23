/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int product = 0;
        for(auto& num:nums) {
            product = product ^ num;
        }
        return product;
    }
};
// @lc code=end

