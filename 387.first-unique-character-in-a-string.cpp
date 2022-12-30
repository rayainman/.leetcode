/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] ={0};

        for (char c : s ) {
            arr[ c - 97 ]++;
        }
        for(int i=0 ; i < s.size() ; i++) {
            if(arr[ s[i] -97 ] == 1 ) {
                return i; 
                // 可能會有複數個 non-repeating character  
                // 但題目只需要找第一個,所以無需特別處理
            }
        }

        return -1;
    }
};
// @lc code=end

