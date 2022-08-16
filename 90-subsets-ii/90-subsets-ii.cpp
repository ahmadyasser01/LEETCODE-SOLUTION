class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>& nums,int idx,vector<int>&res){
        if(idx==nums.size()){
            vector<int> cpy = res;
            ans.push_back(cpy);
            return;
        }
            //choose to include nums[idx];
            res.push_back(nums[idx]);
            backtrack(nums,idx+1,res);
        
        // choose not to include nums[idx]
            res.pop_back();
            while(idx+1<nums.size() && nums[idx]==nums[idx+1]) idx+=1;
            backtrack(nums,idx+1,res);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        backtrack(nums,0,res);
        return ans;
    }
};