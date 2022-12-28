/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        int times = 0;
        for (int i = 0 ; i < nums.size(); i++ ) {
            if( umap.find(nums[i]) != umap.end() && (i-umap[nums[i]]) <= k ) {
                return true;
            }
            umap[nums[i]] = i;
        }
        return false;
    }
};
// @lc code=end

