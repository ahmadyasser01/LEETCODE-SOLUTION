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
   vector<int> rightSideView(TreeNode* root) {
    queue<pair<TreeNode*,int>> q;
    if(root==NULL) return {};
   q.push({root,0});
   int lastlvl=-1;
    vector<int>ans;
    while(!q.empty())
    {
        TreeNode* temp = q.front().first;
        int lvl =  q.front().second;
        q.pop();
        if(temp==NULL) continue;
        if(temp!=NULL && lastlvl<lvl){
            ans.push_back(temp->val);
            lastlvl++;
        }
        if(temp !=NULL){ q.push({temp->right,lvl+1});
                        q.push({temp->left,lvl+1});}
    }



    return ans;
}
};