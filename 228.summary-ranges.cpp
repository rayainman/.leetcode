/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int len = nums.size(), i = 0, j;
        string tmp;
        while (i < len) {
            j = i + 1;
            while (j < len && nums[j - 1] + 1 == nums[j]) j++;

            tmp = to_string(nums[i]) + (j - i > 1 ? "->" + to_string(nums[j - 1]) : "");
            res.push_back(tmp);
            i = j;
        }
        return res;
    }
};
// @lc code=end

