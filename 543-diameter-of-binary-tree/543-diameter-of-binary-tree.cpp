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
    int max_d = INT_MIN;
    int height(TreeNode * root){
         int l =0;
        int r =0 ;
            if(root!=NULL){
                l= height(root->left);
                r = height(root->right);
                max_d = max(max_d,l+r);
                return max(l,r)+1;
            }
        return 0;
    }
    int diameterOfBinaryTree(TreeNode* root) {
       
        height(root);
        return max_d;
    }
};