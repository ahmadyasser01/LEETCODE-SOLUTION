class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_n =nums[0];
        for(auto x: nums){
            sum = max(x,sum+x);
            max_n = max(max_n,sum);
        }
        return max_n;
    }
};