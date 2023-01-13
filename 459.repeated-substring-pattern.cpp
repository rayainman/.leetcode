/*
 * @lc app=leetcode id=459 lang=cpp
 *
 * [459] Repeated Substring Pattern
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        // 演繹推倒
        // assume s = p * k ( k is times )
        // s_fold = s[1:] + s[:-1]
        // s_fold = (head + p + ... + p) + ( p + ... + p + tail)
        // s_fold = head + ( 2k-2 ) * p + tail
        // if k = 1 means s = p *k = 1
        // meaning that " we can find s in s_fold"
        // if no reapted s_fold = head + -2 k+ tail
        // meaning that " there is no s in s_fold"

        int size = s.size();

        string postfix =  s.substr(1, size-1);
        string prefix = s.substr(0,size - 1);

        string sFold = postfix + prefix ;
        return sFold.find(s) != string::npos;
    }
};
// @lc code=end

