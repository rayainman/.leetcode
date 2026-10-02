/*
 * @lc app=leetcode id=424 lang=golang
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
func characterReplacement(s string, k int) int {
    
	rs := []rune(s)  // 把字串轉成 rune 切片，避免中文/emoji 出錯
	
	// 給定一個窗口 left right
	// 其中必定存在一個最多重複的字元數 maxCount; 
	// 窗口長度 - maxCount = 需要被替換的字元數 < k 代表是合法的窗口   
	counts := make(map[rune]int,26)

	// Time Comp O(n)
	// Space Comp O(k)
	left,maxCount,maxLen := 0 , 0 ,0
	for right , ch := range rs {
		counts[ch]++
		if counts[ch] > maxCount {
			maxCount = counts[ch]
		}

		if (right - left + 1) - maxCount >  k {
			// 代表不夠換了
			counts[rs[left]]--
			left++

		} 
		
		if (right - left + 1) > maxLen {
			maxLen = right -left + 1
		}
	}



	return maxLen
}
// @lc code=end

