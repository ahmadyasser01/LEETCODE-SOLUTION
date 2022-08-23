class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0;
        int jumps =0;
        int ans =0;
        int n = nums.size();
        while(r<n-1)
        {
            int maxSteps =0;
            for (int i=l;i<r+1;i++){
                maxSteps = max(maxSteps,i+nums[i]);
            }
            l = r+1;
            r = maxSteps;
            ans++;
        }
        return ans;
    }

};