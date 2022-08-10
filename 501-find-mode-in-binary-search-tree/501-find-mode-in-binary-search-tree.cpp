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
    unordered_map<int,int> map;
    
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        int max_freq = INT_MIN;
        Inorder(root);
        for (auto const& [key, val] : map){
            if(val == max_freq) ans.push_back(key);
            if(val>max_freq){
                max_freq = val;
                ans.clear();
                ans.push_back(key);
            }
        }
        return ans;
    }
    
    void  Inorder(TreeNode* root){
        if(root!=NULL)
        {
            Inorder(root->left);
            map[root->val]++;
            Inorder(root->right);
            
        }
    }
};