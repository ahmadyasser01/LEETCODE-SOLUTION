class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>& nums,int idx,vector<int>&res){
        if(idx==nums.size()){
            ans.push_back(res);
            return;
        }
            //choose to include nums[idx];
            res.push_back(nums[idx]);
            backtrack(nums,idx+1,res);
        
        // choose not to include nums[idx]
            res.pop_back();
            backtrack(nums,idx+1,res);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>res;
        backtrack(nums,0,res);
        return ans;
        
    }
};