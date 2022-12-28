/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        while( num >= 10 ) {
            int reminder = num % 10;
            num = num / 10 + reminder;
        }
        return num;
    }
};
// @lc code=end

