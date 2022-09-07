class Solution {
public:
    int maxProfit(vector<int>& nums) {
        // int sum=0;
        // int max_n =nums[0];
        // for(auto x: nums){
        //     sum = max(x,sum+x);
        //     max_n = max(max_n,sum);
        // }
        // return max_n;
        if(nums.size()<=1) return 0;
        int i=0,j=1;
        int max_profit = INT_MIN;
        while(j<nums.size())
        {
            int profit = nums[j] - nums[i];
             max_profit = max(profit,max_profit);
            if(profit <0) {

            i=j;
        }
            
            j++;
        }
        return max_profit>0?max_profit:0;
    
        
    }
};