/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool isSymmetric(TreeNode* root) {

        if ( !root ) return true;
        return isSameTree(root->left , root->right);
        
    }
private:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if ( !p || !q ) return q==p;
        return (q->val == p->val) && isSameTree(p->left,q->right) && isSameTree(p->right,q->left);
    }
    
};

// @lc code=end

