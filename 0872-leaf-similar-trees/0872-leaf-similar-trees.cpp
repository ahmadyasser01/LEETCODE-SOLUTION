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
   void getLeaves(TreeNode*root,vector<int>&leaves)
    {
       if(root==NULL)return;
        if(root->left==NULL && root->right==NULL)
        {
         leaves.push_back(root->val);
           return;
        }
         getLeaves(root->left,leaves);
         getLeaves(root->right,leaves);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> Lleaves;
        vector<int> Rleaves;
        getLeaves(root1,Lleaves);
        getLeaves(root2,Rleaves);
        
        int n1 = Lleaves.size();
        int n2 = Rleaves.size();
        if(n1!=n2) return false;
        for(int i=0;i<n1;i++)
        {
            if(Lleaves[i]!=Rleaves[i]) return false;
        }
        return true;

        
    }
};