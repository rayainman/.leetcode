/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size() ;
        for ( int i = length - 1 ; i >= 0 ; i-- ) {
            if ( digits[i] != 9 ) {
                digits[i]++;
                break;
            } else {
                digits[0];
            }
        }
        if ( digits[0] == 0 ) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
// @lc code=end

