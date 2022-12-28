/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long low = 1 , high = n , mid;
        while ( low < high) {
            mid = (high + low) / 2;
            if( isBadVersion(mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        
        return low;
    }
};
// @lc code=end

