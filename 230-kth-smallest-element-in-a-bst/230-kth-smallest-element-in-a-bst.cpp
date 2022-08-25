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
    int kthSmallest(TreeNode* root, int k) {
        int n =0;
        TreeNode* current = root;
        stack<TreeNode *> s;
        
        while(current != NULL || s.empty() == false)
        {
            while(current !=NULL)
            {
                s.push(current);
                current = current->left;
            }
            current = s.top();
            s.pop();
            
            n++;
            if(n==k)
                return current->val;
            
            current = current->right;
        }
        return current->val;
        
    }
};