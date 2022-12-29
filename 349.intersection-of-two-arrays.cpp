/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(),nums1.end());
        vector<int> ans;

        for(auto& n:nums2) {
            if( s.count(n)) {
                ans.push_back(n);
                s.erase(n);
            }
        }
        return ans;
    }
};
// @lc code=end

