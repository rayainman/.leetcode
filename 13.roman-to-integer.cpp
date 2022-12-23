/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> pair = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        int len = s.length();
        int ans = 0;
        for (int i = 0 ; i < len ; i++ ) {
            if ( ((i+1) < len) &&  (pair[s[i]] < pair[s[i+1]])) {
                ans -= pair[s[i]];
            }else {
                ans += pair[s[i]];
            }
        }

        return ans;
    }
};
// @lc code=end

