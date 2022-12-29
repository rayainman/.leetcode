/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int r) {
        int l = 0, m, g;
        while (l <= r) {
            m = l + ((r - l) >> 1), g = guess(m);
            //這樣寫可以避免溢出位元

            if (g == -1) r = m - 1;
            // second case: m < answer
            else if (g) l = m + 1;
            // third case: m == answer
            else break;
        }
        return m;
    }
};
// @lc code=end

