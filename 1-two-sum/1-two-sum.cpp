class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i=0,j=nums.size()-1;
        unordered_map<int,vector<int>> map;
        for(int k=0;k<nums.size();k++)
        {
            map[nums[k]].push_back(k);
        }
        sort(nums.begin(),nums.end());
        
        while(i<j){
            if(nums[i]+nums[j]==target)  {
                int idx_1 = map[nums[i]].back();
                 map[nums[i]].pop_back();
                
                int idx_2 = map[nums[j]].back();
                 map[nums[j]].pop_back();
                return {idx_1,idx_2};
                
            }
            else if(nums[i]+nums[j]>target) j--;
            else if(nums[i]+nums[j]<target)  i++;
            
        }
        return {};
    }
};