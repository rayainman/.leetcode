/*
 * @lc app=leetcode id=3 lang=golang
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
func lengthOfLongestSubstring(s string) string {

	rs := []rune(s)
	lastSeenAt := make(map[rune]int)

	left, maxLen := 0, 0
	bestStart := left
	// Time Comp O(n)
	// Space Comp O(m)
	for right, ch := range rs {
		if pos, ok := lastSeenAt[ch]; ok && pos+1 > left {
			left = pos + 1
		}

		lastSeenAt[ch] = right

		if right-left+1 > maxLen {
			maxLen = right - left + 1
			bestStart = left
		}

	}

	return string(rs[bestStart : bestStart+maxLen])
}

// @lc code=end

// @lc code=end

// rs := []rune(s)
// n := len(rs)

// if n <= 1 {
// 	return n
// }

// maxLen := 0

// // time complexity 𝑂(n*n)
// // space complexity O(m)
// for i := 0 ; i < n ; i++ {
// 	seen := make(map[rune]bool)
// 	for j:=i ; j < n ; j++ {
// 		if seen[rs[j]] {
// 			break
// 		}
// 		seen[rs[j]] = true

// 		if j-i+1 > maxLen {
// 			maxLen = j-i+1
// 		}
// 	}
// }

// return maxLen

// 給定一個字串s,找到最長的子字串,且不含重複字

// 目標：找到字串中最長的「不含重複字元」的子字串長度。
// 方法：用兩個指標 left 和 right 表示目前的視窗 [left, right]，保證這個視窗內沒有重複字元。
// 核心技巧：當 right 向右擴張時，如果遇到重複字元，就把 left 直接跳到該字元上次出現位置的下一格，這樣就能快速排除重複。

// rs := []rune(s)  // 把字串轉成 rune 切片，避免中文/emoji 出錯
// lastSeenAt := make(map[rune]int)
// left, maxLen := 0,0  // left 是目前視窗的左邊界。

// // Time Comp : O(n)
// // Space Comp  : O(m) the worst case
// for right , ch := range rs {
// 	// 撞到重複字元 → 這個 right 的窗口不能再擴。把 left 移到 pos+1 排除掉它。
// 	// 但只在 pos+1 > left 時才移:若 pos < left,那個字元已經不在窗口內,
// 	// 不是當前窗口的重複,移了會讓 left 倒退。
// 	if pos, ok := lastSeenAt[ch] ; ok && pos + 1 > left {
// 		left = pos + 1
// 	}
// 	lastSeenAt[ch] = right
// 	// 字串的長度是 left 到 right
// 	if right - left + 1 > maxLen {
// 		maxLen = right - left +1
// 	}
// }