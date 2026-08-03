/*
 * @lc app=leetcode id=15 lang=golang
 *
 * [15] 3Sum
 */


// @lc code=start

import "sort"

func threeSum(nums []int) [][]int {

	ans := [][]int{}
	length := len(nums)
	if length < 3 {
		return ans
	}
	
	// O(n log n)
	sort.Ints(nums)

	// O(n)
	for i := 0; i < length-2; i++ {
		if nums[i] > 0 {
			break
		}

		// 第一個-1的事件已經處理過了; 相連著的第二個-1 如果會滿足會出現一樣的解
		if i > 0 && nums[i] == nums[i-1] {
			continue
		}

		left := i+1
		right := length - 1 

		// O(n) 每次走一步最多走n布
		for left < right {
			sum := nums[i] + nums[left] + nums[right]

			if sum == 0 {
				ans = append(ans, []int{nums[i], nums[left], nums[right]})
			
				for left < right && nums[left]== nums[left+1]{
					left++
				}
			
				for left < right && nums[right] == nums[right-1] {
					right--
				}

				left++
				right--
			} else if sum > 0 {
				right --
			} else {
				left ++
			}
			
		}
	}



	return ans
}
// @lc code=end

