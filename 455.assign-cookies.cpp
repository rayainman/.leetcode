/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(),less<int>());
        sort(s.begin(), s.end(),less<int>());

        // 從最小開始分
        int people = 0;

        for (auto &cookies : s ) {
            if ( people >= g.size() || people >= s.size()) {
                break;
            }
            if(  cookies >= g[people] ) {
                people++;
            }
        }

        return people;

    }
};
// @lc code=end

