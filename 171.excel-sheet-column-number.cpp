/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        long ans = 0;
        for (char c : columnTitle) {
            int diff = c - 'A' + 1;
            ans = ans * 26 + diff;
        }
        return ans;
    }
    
};
// @lc code=end

