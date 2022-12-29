/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // map<int,int> m;
        // vector<int> ans;
        // for(auto& n : nums1) {
        //     m[n]++;
        // }
        // for(auto& n : nums2) {
        //     if( m[n] > 0 ) {
        //         ans.push_back(n);
        //         m[n]--;
        //     }
        // }

        // return ans;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums1.erase(set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums1.begin()), nums1.end());
        return nums1;
    }
};
// @lc code=end

