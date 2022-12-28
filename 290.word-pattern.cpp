/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream in((s));

        map<char,int> ptoi;
        map<string,int> stoi;

        int i = 0 , n = pattern.size();
        for(string word ; in >> word ; ++i ) {
            // i == n 表示 pattern比較長
            if( i == n || ptoi[pattern[i]] != stoi[word]) {
                return false;
            }
            ptoi[pattern[i]] = i+1;
            stoi[word] = i+1;
        }

        

        return i==n; // 表示個數相同
    }
};
// @lc code=end

