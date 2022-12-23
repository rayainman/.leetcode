/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int head = 0,tail = s.length()-1;
        while ( head < tail) {
            char chead = tolower(s[head]);
            char ctail = tolower(s[tail]);
            if( !isChar(chead) ){
                head++;
                continue;
            }
            if( !isChar(ctail)){
                tail--;
                continue;
            }
            if( chead != ctail) {
                return false;
            }
            head++;
            tail--;
        }
        
        return true;
    }
    bool isChar(char c) {
        
        if( c >= 'a' && c <= 'z') 
            return true;
        if( c >= '0' && c <= '9')
            return true;
        return false;    
    }
};
// @lc code=end

