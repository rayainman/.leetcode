/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        auto n =  strs.size();
        if ( n == 0 ) {
            return "";
        }
        sort( strs.begin() , strs.end());
        auto longest = strs[0];
        auto shortest = strs[n-1];
        string ans = "";
        for( int i = 0 ; i < longest.size() ; i++) {
            if( longest[i] == shortest[i]) {
                ans += longest[i];
            } else {
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

