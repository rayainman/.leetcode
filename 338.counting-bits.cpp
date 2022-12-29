/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits(n+1);
        for (int i = 1; i <= n; ++i){
            bits[i] = bits[i&(i-1)] + 1;
        }
        return bits;
    }   
};
// @lc code=end

