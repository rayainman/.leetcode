/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {

        if ( x == 1 ) return 1;
        if ( x == 0 ) return 0;

        long i = 0;
        int start = 0 , end = x ;
        long mid,ans;

        // 最多八次
        while ( start <= end ){
            mid = (start + end) / 2;
            if ( mid * mid == x ) {
                return mid;
            } else if ( mid * mid < x ) {
                start = mid + 1 ;
                ans = mid;
            } else {
                end = mid - 1;
            }
        }
        
        return ans;

    }
};
// @lc code=end

