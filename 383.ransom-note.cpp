/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if ( ransomNote.size() > magazine.size()) {
            return false;
        }
        int arr[26] ={0};
        // 比用 map<char,int>快
        for(auto& c : magazine) {
            arr[c-97]++;
        }
        for(auto& c : ransomNote) {
            arr[c-97]--;
            if( arr[c-97] < 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

