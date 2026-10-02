/*
 * @lc app=leetcode id=33 lang=golang
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
func search(nums []int, target int) int {

	lo := 0
	hi := len(nums) - 1

	// a0,a1,a2,a3....an // 遞增
	// ak…an | a0…ak-1 // 旋轉k次 ,
	// | 是轉折點 ,轉折點左邊每個數字都大於右邊
	// 包含斷點的那一側必定大概是無序的
	// mid > hi 斷點在右側
	// mid < hi 斷點在左側

	// Time Comp O(log n)
	// Space Comp O(1)
	for lo <= hi {
		mid := (hi + lo) / 2
		if target == nums[mid] {
			return mid
		}
		if nums[mid] > nums[hi] {

			if target < nums[mid] && target >= nums[lo] {
				// 左邊有序 檢查在不在左邊範圍內
				hi = mid - 1

			} else {
				lo = mid + 1
			}
		} else {
			// 右邊有序
			if target <= nums[hi] && target > nums[mid] {
				lo = mid + 1
			} else {
				hi = mid - 1
			}
		}

	}

	return -1
}

// @lc code=end

