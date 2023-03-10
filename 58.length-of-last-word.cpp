/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int tail = s.size() - 1 ;
        int count = 0 ;
        while( tail >= 0 && s[tail] == ' ')   {
            tail--;
        }
        while( tail >= 0 && s[tail] != ' ') {
            count++;
            tail--;
        }
        return count;
    }
};
// @lc code=end

