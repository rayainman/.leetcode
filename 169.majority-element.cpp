/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> counts;

        for(auto& num : nums) {
            counts[num]++;
            if( counts[num] > nums.size()/2) return num;
        }

        return -1;
    }
};
// @lc code=end

