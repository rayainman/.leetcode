/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m ;
        int res = 0;
        for (char c : s) {
            m[c]++;
            if( m[c] % 2 == 0 ) {
                res += 2;
                m[c] = 0;
            }
        }

        for ( auto v : m ) {
            if ( v.second == 1) {
                res++;
                break;
            }
        }

        return res;
    }
};
// @lc code=end

