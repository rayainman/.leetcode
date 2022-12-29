/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        // if ( n <= 0) return false;
        
        // while (n % 3 == 0) {
        //     n = n / 3 ;
        // }
        
        // return n==1;
        return fmod(log10(n)/log10(3), 1)==0;
    }
};
// @lc code=end

