/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */

// @lc code=start
class NumArray {
private:
    vector<int> sums;
public:
    NumArray(vector<int>& nums) {
        sums.push_back(0);
        for(auto &n : nums) {
            sums.push_back( sums.back() + n);

            // 最後一個值+當前值
        }
    }
    
    int sumRange(int left, int right) {
        return sums[right + 1] - sums[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end

