/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> lines(numRows);
        
        for ( int i = 0 ; i < numRows ; i++ ) {
            lines[i].resize(i+1);
            lines[i][0] = lines[i][i] = 1;

            for(int j = 1; j < i ; j++ ) {
                lines[i][j] = lines[i-1][j-1] + lines[i-1][j];
            }
        }

        return lines;
    }
};
// @lc code=end

