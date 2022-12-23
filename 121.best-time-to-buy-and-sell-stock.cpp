/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int base = prices[0];

        for(int i = 1 ; i < prices.size() ; i++ ) {
            if ( prices[i] - base < 0 ) {
                base = prices[i];
                continue;
            }
            profit = max(profit , prices[i]-base);
        }
        
        return profit;
    }
};
// @lc code=end

