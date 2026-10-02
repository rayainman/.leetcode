/*
 * @lc app=leetcode id=121 lang=golang
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
func maxProfit(prices []int) int {

	base := prices[0]
	max := 0

	// Time Comp O(n)
	// Space Comp O(1)
	for i:=1 ; i < len(prices) ; i++ {
		if prices[i] - base < 0 {
			base = prices[i]
			continue
		}
		if  prices[i] - base > max {
			max = prices[i] - base
		}
	}

	return max
}
// @lc code=end

