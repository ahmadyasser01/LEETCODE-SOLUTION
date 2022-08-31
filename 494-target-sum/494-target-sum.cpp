class Solution {
public:
    map <pair<int,int>,int> dp;
    int backtrack(vector<int>& nums, int target,int i)
    {
        if(i==nums.size())
        {
            return target ==0 ?1:0;
        }
        if(dp.find({i,target})!=dp.end()) return dp[{i,target}];
        
         dp[{i,target}] = backtrack(nums,target+nums[i],i+1) +
             backtrack(nums,target-nums[i],i+1);
        return dp[{i,target}];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return backtrack(nums,target,0);
    }
};