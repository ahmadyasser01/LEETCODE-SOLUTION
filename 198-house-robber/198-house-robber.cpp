class Solution {
public:
int robRec(vector<int>&nums, int n,vector<int>&dp)
{   
    if(n<0) return 0;
    if(n==0) return dp[n]= nums[0];
    if(dp[n]!=-1) return dp[n];
    return dp[n]= max(nums[n] + robRec(nums,n-2,dp), robRec(nums,n-1,dp));
}
int rob(vector<int>& nums) {
    vector<int>dp(nums.size(),-1);
    if(nums.size()==1) return nums[0];
    return robRec(nums,nums.size()-1,dp);

}

};

/*
        if(nums.size()==1) return nums[0];
        vector<int> dp(nums.size(),0);
        
        dp[0]=nums[0];
        dp[1]= nums[1];
        for(int i=0;i<dp.size()-2;i++)
        {
            for(int j=i+2;j<nums.size();j++)
            {dp[i+2] = max(dp[i+2],dp[i]+ nums[j]);}
        }
        return max(dp[dp.size()-1],dp[dp.size()-2]);*/