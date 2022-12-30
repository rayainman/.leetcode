/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
        int ans = 0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        
        if ( root == nullptr) {
            return ans;
        }
        if ( root->left != nullptr  && root->left->left == nullptr && root->left->right == nullptr) {
            ans += root->left->val;
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);

        return ans;

    }
};
// @lc code=end

