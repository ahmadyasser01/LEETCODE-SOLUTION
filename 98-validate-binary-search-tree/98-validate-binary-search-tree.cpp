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
  bool validateBSTrec(TreeNode* tree,long long int min,long long int max){

    if(tree!=NULL){
        if(tree->val > min && tree->val < max)
            return validateBSTrec(tree->left,min,tree->val) &&
                   validateBSTrec(tree->right,tree->val,max);
        else return false;
    }
    return true ;
};
    bool isValidBST(TreeNode* root) {
    long long int min_val = LONG_MIN;
    long long int max_val = LONG_MAX;

    if(root->left == NULL &&root->right == NULL) return true;
    return validateBSTrec(root,min_val,max_val) ;
    }
};