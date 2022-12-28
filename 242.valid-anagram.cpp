/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if ( s.size() != t.size()) return false;
        // map<char,int> sm , tm;
        // for (int i = 0 ; i < s.size() ; i++ ) {
        //     sm[s[i]]++;
        //     tm[t[i]]++;
        // }
        // if ( sm == tm ) return true;
        // return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
// @lc code=end

