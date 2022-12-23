/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int indexM = m-1 , indexN = n-1;
        int i = m + n -1 ;
        while ( indexM >=0 && indexN >= 0 ) {
            if ( nums1[ indexM ] >= nums2[indexN]) {
                nums1[i] = nums1[indexM];
                indexM--;
            } else {
                nums1[i] = nums2[indexN];
                indexN--;
            }
            i--;
        }
        while(indexN >= 0 ) {
            nums1[i] = nums2[indexN];
            i--;
            indexN--;
        }
    }
};
// @lc code=end

