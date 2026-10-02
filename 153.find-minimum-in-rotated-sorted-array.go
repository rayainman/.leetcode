/*
 * @lc app=leetcode id=153 lang=golang
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
func findMin(nums []int) int {
	lo := 0
	hi := len(nums) - 1

	//  time Comp ( log n)
	//  Space O(1)
	for lo < hi {
		mid := (lo + hi) / 2
		times++
		if nums[mid] > nums[hi] {
			lo = mid + 1
		} else {
			hi = mid
		}
	}

	return lo
}

// @lc code=end

// mid 往小的那端收斂
// lo := 0
// hi := len(nums) - 1

// // time Comp ( log n)
// // Space O(n) , 陣列長度
// // lo 向右 收斂 ; hi 向左收斂 ; 結束
// for lo < hi {
// 	// 收束條件保證 lo hi 最後必定相同
// 	mid := (lo + hi) / 2
// 	if nums[mid] > nums[hi] {
// 		lo = mid + 1 // lo 至少是增加上一輪的一半  (lo + hi) / 2
// 	} else {
// 		hi = mid // 減少 mid 就是兩者相加/2
// 	}
// }

// return nums[hi]