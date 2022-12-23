/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if ( x >= 0 && x < 10) {
            return true;
        }
        if ( x < 0 || x % 10 == 0) {
            return false;
        }
        int num = x ;
        long goal = 0;
        while( x > 0) {
            goal = goal * 10 + x%10;
            x = x / 10;
        }
        if ( goal == num ) {
            return true;
        }

        return false;
    }
    
};
// @lc code=end

