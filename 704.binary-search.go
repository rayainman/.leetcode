/*
 * @lc app=leetcode id=704 lang=golang
 *
 * [704] Binary Search
 */

// @lc code=start
func search(nums []int, target int) int {
	lo := 0
	hi := len(nums) - 1  // 閉合區間

	// O(log n) // 每次搜尋少一半
	for lo <= hi {
		//在 Go 的 64-bit int 下不會;如果是 32-bit 環境,要寫成 lo + (hi-lo)/2。」
		mid := (lo + hi) / 2
		if nums[mid] == target {
			return mid
		} else if nums[mid] < target {
			lo = mid + 1
		} else  {
			hi = mid - 1
		}
	}

	return -1
}

// @lc code=end

