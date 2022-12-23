/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if ( n <= 2 ) {
            return n;
        }

        int n1 = 1;
        int n2 = 2;
        int all = 0;
        for (int i = 3 ; i <= n ; i++ ) {
            all = n1 + n2 ;
            n1 = n2 ;
            n2 = all;
        }
        
        return all;
    }
};
// @lc code=end

