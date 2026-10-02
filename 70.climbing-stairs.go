/*
 * @lc app=leetcode id=70 lang=golang
 *
 * [70] Climbing Stairs
 */

// @lc code=start
func climbStairs(n int) int {
    if n < 1 || n > 45 {
		return 0
	}

	if n == 1 {
		return 1
	}

	if n == 2 {
		return  2
	}
	
	num1 := 1
	num2 := 2
	result := 0
	// O(n)
	// Space(3)
	for i:=3 ; i <= n ; i++ {
		result = num1 + num2
		num1 = num2
		num2 = result
	}

	return result
}
// @lc code=end

