/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
public:
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode* cur = root;

        while( cur || !s.empty()) {
            while(cur) {
                s.push(cur);
                cur = cur -> left;
            }
            cur = s.top();
            s.pop();
            ans.push_back(cur->val);
            cur = cur -> right;
        }

        return ans;
        
    }
};
// @lc code=end

