/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 *
 * https://leetcode.com/problems/arranging-coins/description/
 *
 * algorithms
 * Easy (46.18%)
 * Likes:    2926
 * Dislikes: 1159
 * Total Accepted:    330.9K
 * Total Submissions: 716.4K
 * Testcase Example:  '5'
 *
 * You have n coins and you want to build a staircase with these coins. The
 * staircase consists of k rows where the i^th row has exactly i coins. The
 * last row of the staircase may be incomplete.
 * 
 * Given the integer n, return the number of complete rows of the staircase you
 * will build.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: n = 5
 * Output: 2
 * Explanation: Because the 3^rd row is incomplete, we return 2.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: n = 8
 * Output: 3
 * Explanation: Because the 4^th row is incomplete, we return 3.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= n <= 2^31 - 1
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        int c = sqrtf(2.0f*n+0.25f)-1;                               // 1. candidate that could give the correct answer or could be 1 less
        int sum = c&1 ? (c+1)/2*c : c/2*(c+1);                       // 2. sum (no need in integer types with extra range)
	    return n-sum < c+1 ? c : c+1; 
    }
};
// @lc code=end

