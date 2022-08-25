class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int> > ans;
        for(int i=0;i<nums.size();i++)
        {
            int l =i+1;
            int r = nums.size()-1;
            if(i>0 && nums[i]== nums[i-1]) continue;
            while(l<r)
            {
                int sum = nums[i] + nums[l]+nums[r];
                if( sum<0) {
                   l+=1;
                }
                else if(sum>0) {
                    r-=1;
                }
                else {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l+=1;
                    while(nums[l]==nums[l-1] && l<r)
                        l+=1;
                }
            
            }
            
        }
        return ans;
        
    }
};