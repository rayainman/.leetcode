/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        if ( length == 0 ) {
            return 0;
        }
        int head = 0 ;
        while ( head < length ) {
            if ( nums[head] == val ) {
                nums[head] = nums[length-1];
                length--;
            } else {
                head++;
            }
        }
        return length;
    }
};
// @lc code=end

