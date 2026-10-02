/*
 * @lc app=leetcode id=875 lang=golang
 *
 * [875] Koko Eating Bananas
 */
import (
	"math"
)

// @lc code=start
func minEatingSpeed(piles []int, h int) int {
	// 找出吃完全部的最慢速度
	lo := 1 // k 的最小值
	hi := 0 // k 的最大值
	for _, p := range piles {
		if p > hi {
			hi = p
		}
	}

	// time Comp O(nlog M) , M: max(piles)
	// Space Comp O(1)
	// 速度 k 時的總時數 sum(ceil(p/k)) <= h
	for lo < hi {
		// as 速度 k 需要的總時間為 totalTime
		totalTime := 0
		k := (lo + hi) / 2
		for _, p := range piles {
			totalTime = totalTime + (p+k-1)/k
		}

		if totalTime <= h {
			hi = k // 滿足條件// 可以再慢
		} else {
			lo = k + 1 // 太慢了要更快
		}
	}

	return lo
}

// @lc code=end

