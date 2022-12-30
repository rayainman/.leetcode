/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int res = 0 ;

        for (int i = 0 ; i < s.size() ; i++) {
            res = res ^ ( s[i] -97) ^ (t[i] -97);
        }
        res = res ^ (t[t.size()-1] -97);

        return char(res+97);
    }
};
// @lc code=end

