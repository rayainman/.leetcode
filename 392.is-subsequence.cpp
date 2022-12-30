/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        // int si = 0;
        // for(int i = 0 ; i < t.size() ; i++ ) {
        //     if( t[i] == s[si] ) si++;
        // }

        // return si == s.size();

        int m = s.size();
        int n = t.size();
        int i = 0, j = 0;
        while(i < m && j < n) {
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == m ? 1 : 0;
    }
};
// @lc code=end

