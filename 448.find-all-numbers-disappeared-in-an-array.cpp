/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0 ; i < nums.size() ; i++ ) {
            if ( nums[abs(nums[i])-1] > 0 ) {
                nums[abs(nums[i])-1] *=   (-1);
            }
        }
        for (int i = 0 ; i < nums.size() ; i++ ) {
            if ( nums[i] > 0 ) {
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};
// @lc code=end

