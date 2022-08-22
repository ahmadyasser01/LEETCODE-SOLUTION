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
     int count =0;
    int countNodesRec(TreeNode* root, int max){
        if(root ==NULL) return 0;
        if(root->val >= max) {
            max = root->val;
            count++;
        }
        countNodesRec(root->left,max);
        countNodesRec(root->right,max);
        return count;

    }
    int goodNodes(TreeNode* root) {
        int max = root->val;
        int ans= countNodesRec(root,max);
        return ans;
    }

};