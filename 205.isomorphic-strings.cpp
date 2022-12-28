/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //unordered_map<char, int> hashs,hasht;
        char hashs[128] = {0} , hasht[128] = {0}; // 直接比較字串比 比較map快
        int len = s.size();

        for ( int i=0 ; i < len; i++ ) {
            if ( hashs[s[i]] != hasht[t[i]]) return false;
            hashs[s[i]] = i+1;
            hasht[t[i]] = i+1;
        }


        return true ;
    }
};
// @lc code=end

