/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int head = 0 , tail = nums.size()-1 , mid;

        if ( target <= nums[head]) {
            return 0;
        }
        if ( target > nums[tail]) {
            return tail+1;
        }


        while ( head <= tail ) {
            mid = (head + tail) / 2;
            if ( nums[mid] == target ) {
                return mid;
            } 
            if ( nums[mid] < target ) {
                head = mid + 1;
            } else {
                tail = mid - 1;
            }
        }

        return head;

    }
};
// @lc code=end

