/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        return long(sqrt(num)) * long(sqrt(num)) == num;
    }
};
// @lc code=end

