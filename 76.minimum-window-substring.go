/*
 * @lc app=leetcode id=76 lang=golang
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
func minWindow(s string, t string) string {

	rt := []rune(t)
	rs := []rune(s)
	need := make(map[rune]int) // 每個字元的需求
	for _, ch := range rt {
		need[ch]++
	}
	left := 0
	required := len(need) // 需要滿足的獨特字元的數目
	matched := 0          // 匹配好的字元數木
	bestStart, bestLen := 0, math.MaxInt32
	// 先找到第一組合法字
	// {left,right} 代表合法字  matched == required 代表合法區間
	//
	// Comp O(n)
	// Time Space O(m)
	for right, ch := range rs {
		if _, ok := need[ch]; ok {
			need[ch]--
			if need[ch] == 0 {
				matched++
			}
		}
		for matched == required {

			if right-left+1 < bestLen {
				bestStart = left
				bestLen = right - left + 1
			}

			// 嘗試縮掉左邊
			if _, ok := need[rs[left]]; ok {
				need[rs[left]]++
				if need[rs[left]] > 0 {
					matched--
				}
			}
			left++

		}
	}

	if bestLen == math.MaxInt32 {
		return ""
	}
	return s[bestStart : bestStart+bestLen]
}

// @lc code=end

