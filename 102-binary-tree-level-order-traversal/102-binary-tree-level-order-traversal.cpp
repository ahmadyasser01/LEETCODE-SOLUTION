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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>bfs;
        queue<pair<TreeNode*,int>> q;
        int l =0;
        if(root!=NULL)
    {    q.push({root,l});
        bfs.push_back({root->val});}
        while(!q.empty()){
            TreeNode *top = q.front().first;
            int level = q.front().second;
            q.pop();
            TreeNode* left = top->left;
            TreeNode* right = top->right;

            if(left!=NULL) {
                if(bfs.size()<=level+1) bfs.push_back({});
                bfs[level+1].push_back(left->val);
                q.push({left,level+1});
                     }
            if(right!=NULL){ 
                                if(bfs.size()<=level+1) bfs.push_back({});
                bfs[level+1].push_back(right->val);
                 q.push({right,level+1});
                           }
            
        }
        return bfs;
        
    }
};