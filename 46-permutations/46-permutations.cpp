class Solution {
public:
        vector<vector<int>>ans;

    void backtrack(vector<int>&nums, vector<int> &current,vector<int>&vis){
        if(current.size()==nums.size()){
            ans.push_back(current);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i]) continue;
            vis[i]=1;
            current.push_back(nums[i]);
            backtrack(nums,current,vis);
             vis[i]=0;
            current.pop_back();
            
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<int>visited(nums.size(),0);
        backtrack(nums,curr,visited);
        
        return ans;
        
    }
};