/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroIndex =0;

        for ( int i = 0 ; i < nums.size() ; i++ ) {
            if ( nums[i] != 0 ) {
                swap( nums[zeroIndex],nums[i]);
                zeroIndex++;
            }
        }
    }
};
// @lc code=end

