/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 0 2 3 4 5  6  7 8 9
// 6 2 0 4 3 5 8 7 9
// 6 2 8 0 4 7 9 3 5
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int min_val = min(p->val,q->val);
        int max_val = max(p->val,q->val);
        if(root->val >= min_val && root->val<=max_val) return root;
        if(root->val > min_val && root->val > max_val)
            return lowestCommonAncestor(root->left,p,q);
        if(root->val < min_val && root->val < max_val)
            return lowestCommonAncestor(root->right,p,q);
        return NULL;
    }
};