class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mini =1;
        int maxi = 1;
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0) swap(mini,maxi);
            mini = min(nums[i],nums[i]*mini);
            maxi  = max(nums[i],nums[i]*maxi);
            ans= max(maxi,ans);
        }
        return ans;
    }
};