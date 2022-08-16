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
    int maxDepth(TreeNode* root) {
        int maxDepth = 1;
        queue<pair<TreeNode*,int>> q;
        if(root ==NULL) return 0;
        q.push({root,maxDepth});
        
        while(!q.empty())
        {
            TreeNode * t = q.front().first;
            maxDepth = q.front().second;
            q.pop();
            if(t->left !=NULL)
            {
                q.push({t->left,maxDepth+1});
            }
           if(t->right !=NULL)
            {
                q.push({t->right,maxDepth+1});
            }
        }
        return maxDepth;
        
    }
};