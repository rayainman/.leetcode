/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string al= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans = "";

        while (columnNumber > 0) {
            columnNumber--;
            int k = columnNumber %26;
            ans.push_back(al[k]);
            columnNumber /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

