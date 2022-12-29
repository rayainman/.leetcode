/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        int low = 0 , high = s.size()-1;
        // while(low < high) {
        //     if(s[low] !='a' && s[low] !='e' && s[low] !='i' && s[low] !='o' && s[low] !='u' && s[low] !='A' && s[low] !='E' && s[low] !='I' && s[low] !='O' && s[low] !='U') {
        //         low++;
        //         continue;
        //     }
        //     if(s[high] !='a' && s[high] !='e' && s[high] !='i' && s[high] !='o' && s[high] !='u' && s[high] !='A' && s[high] !='E' && s[high] !='I' && s[high] !='O' && s[high] !='U') {
        //         high--;
        //         continue;
        //     }
        //     swap(s[low],s[high]);
        //     low++;
        //     high--;
        // }

        while (low < high) {
            low = s.find_first_of("aeiouAEIOU", low);
            high = s.find_last_of("aeiouAEIOU", high);
            if ( low < high) {
                swap(s[low] , s[high]);
                low++;
                high--;
            }
        }
        

        return s;
    }
};
// @lc code=end

