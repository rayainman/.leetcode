/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> lines(rowIndex+1);
        
        for ( int i = 0 ; i < rowIndex+1 ; i++ ) {
            lines[i].resize(i+1);
            lines[i][0] = lines[i][i] = 1;

            for(int j = 1; j < i ; j++ ) {
                lines[i][j] = lines[i-1][j-1] + lines[i-1][j];
            }
        }

        return lines[rowIndex];
    }
};
// @lc code=end

