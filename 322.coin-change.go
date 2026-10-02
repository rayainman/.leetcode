/*
 * @lc app=leetcode id=322 lang=golang
 *
 * [322] Coin Change
 */

// @lc code=start

func coinChange(coins []int, amount int) int {
	dp := make([]int, amount+1)

	// space complexity: O(amount)
	// time complexity: O(amount * len(coins))

	for i := 1; i <= amount; i++ {
		dp[i] = amount + 1
		for _, coin := range coins {
			if i-coin >= 0 {
				dp[i] = min(dp[i], dp[i-coin]+1)
			}
		}
	}

	if dp[amount] == amount+1 {
		return -1
	}
	return dp[amount]
}

// @lc code=end

